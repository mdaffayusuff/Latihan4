#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "Prodi.cpp"

int main(){

    list<Prodi> theList;

    Mahasiswa mhs1 = Mahasiswa("600028830020", "Bambang_Sahputra", 'L', "UPI", "Bambang@upi.edu", "1908762");
    Mahasiswa mhs2 = Mahasiswa("600028839021", "Yuliana_Sari", 'P', "UPI", "Yuli@upi.edu", "1908212");

    Dosen dsn1 = Dosen("198028830020", "Herlina", 'P', "UPI", "Her@upi.edu", "198789", "S2", "Sistem_Data");

    Course mat_kul1 = Course("Sistem_Basis_Data", dsn1, mhs1);

    mat_kul1.add_mahasiswa(mhs2);

    Prodi prod1 = Prodi("FPMIPA", "1902", "Ilmu_Komputer", mat_kul1);

    Mahasiswa mhs3 = Mahasiswa("600028878943", "Gasai_Pamungkas", 'L', "UPI", "GasaiP@upi.edu", "2099189");
    Mahasiswa mhs4 = Mahasiswa("600020927356", "Fitriani_Adinda", 'P', "UPI", "FitAdinda@upi.edu", "1908442");

    Dosen dsn2 = Dosen("198028830020", "Efendi Abdullah", 'L', "UPI", "EfendiAbdul@upi.edu", "198789", "S3", "Server_Managment");
    Course mat_kul2 = Course("Jaringan_Komputer", dsn2, mhs3);

    mat_kul2.add_mahasiswa(mhs4);

    prod1.add_courses(mat_kul2);

    theList.push_back(prod1);

    for (Prodi data:theList){
        cout << endl;
        cout << data.get_kode()<< "|" << data.get_nama_prodi() << "(" << data.get_fakultas() << ")" << endl;
    }
    return 0;
}


