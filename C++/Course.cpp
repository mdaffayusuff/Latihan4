//Include untuk penggunaan string, list, class Mahasiswa, dan class Dosen
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "Mahasiswa.cpp"
#include "Dosen.cpp"

//Deklarasi std agar tidak perlu menulisnya kembali pada code
using namespace std;

//Membuat class Course
class Course
{
private:

    //Membuat atribut yang dibutuhkan/ditambahkan dari parent
    string nama_matkul;
    Dosen dosen;
    list<Mahasiswa> mahasiswas;

public:
    
    //Fungsi construct kosong
    Course(){
        this->nama_matkul = "";
        this->dosen = Dosen();
        this->mahasiswas.clear();
    }

    //Fungsi construct dengan parameter
    Course(string nama_matkul, Dosen dosen, Mahasiswa mahasiswa){
        this->nama_matkul = nama_matkul;
        this->dosen = dosen;
        this->mahasiswas.clear();
        this->mahasiswas.push_back(mahasiswa);
    }


    //Setter dan getter tiap atribut yang ada di class ini
    void set_nama_matkul(string nama_matkul)
    {
        this->nama_matkul = nama_matkul;
    }

    void set_dosen(Dosen dosen){
        this->dosen = dosen;
    }

    void add_mahasiswa(Mahasiswa mahasiswa){
        this->mahasiswas.push_back(mahasiswa);
    }

    string get_nama_matkul(){
        return this->nama_matkul;
    }

    Dosen get_dosen(){
        return this->dosen;
    }

    list<Mahasiswa> get_mahasiswas(){
        return this->mahasiswas;
    }

    ~Course(){

    }
};