//Include untuk penggunaan string dan class SivitasAkademik
#include <iostream>
#include <string>
#include "SivitasAkademik.cpp"

//Deklarasi std agar tidak perlu menulisnya kembali pada code
using namespace std;

//Membuat class Mahasiswa dengan parent Sivitas Akademik
class Mahasiswa : public SivitasAkademik
{
protected:

    //Membuat atribut yang dibutuhkan/ditambahkan dari parent
    string NIM;
    string prodi;
    string fakultas;

public:
    
    //Fungsi construct kosong
    Mahasiswa(){
        this->NIK = "";
        this->nama = "";
        this->jenis_kelmain = '-';
        this->asal_universitas = "";
        this->email_edu = "";
        this->NIM = "";
        this->prodi = "";
        this->fakultas = "";
    }

    //Fungsi construct dengan parameter
    Mahasiswa(string NIK, string nama, char jenis_kelamin, string asal_universitas, string email_edu, string NIM, string prodi, string fakultas) : SivitasAkademik(NIK, nama, jenis_kelamin, asal_universitas, email_edu){
        this->NIM = NIM;
        this->prodi = prodi;
        this->fakultas = fakultas;
    }


    //Setter dan getter tiap atribut yang ada di class ini
    void set_NIM(string NIM)
    {
        this->NIM = NIM;
    }

    void set_prodi(string prodi){
        this->prodi = prodi;
    }

    void set_fakultas(string fakultas){
        this->fakultas = fakultas;
    }

    string get_NIM(){
        return this->NIM;
    }

    string get_prodi(){
        return this->prodi;
    }

    string get_fakultas(){
        return this->fakultas;
    }

    ~Mahasiswa(){

    }
};