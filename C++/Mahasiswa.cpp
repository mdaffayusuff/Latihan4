//Include untuk penggunaan string dan class SivitasAkademik
#include <iostream>
#include <string>
#include "SivitasAkademik.cpp"

//Deklarasi std agar tidak perlu menulisnya kembali pada code
using namespace std;

//Membuat class Mahasiswa dengan parent Sivitas Akademik
class Mahasiswa : public SivitasAkademik
{
private:

    //Membuat atribut yang dibutuhkan/ditambahkan dari parent
    string NIM;

public:
    
    //Fungsi construct kosong
    Mahasiswa() : SivitasAkademik("", "", '-', "", ""){
        this->NIM = "";
    }

    //Fungsi construct dengan parameter
    Mahasiswa(string NIK, string nama, char jenis_kelamin, string asal_universitas, string email_edu, string NIM) : SivitasAkademik(NIK, nama, jenis_kelamin, asal_universitas, email_edu){
        this->NIM = NIM;
    }


    //Setter dan getter tiap atribut yang ada di class ini
    void set_NIM(string NIM)
    {
        this->NIM = NIM;
    }

    string get_NIM(){
        return this->NIM;
    }

    ~Mahasiswa(){

    }
};