//Include untuk penggunaan string dan class SivitasAkademik
#include <iostream>
#include <string>
#include "SivitasAkademik.cpp"

//Deklarasi std agar tidak perlu menulisnya kembali pada code
using namespace std;

//Membuat class Dosen dengan parent SivitasAkademik
class Dosen : public SivitasAkademik
{
protected:

    //Membuat atribut yang dibutuhkan/ditambahkan dari parent
    string NIP;
    string pend_terakhir;
    string keahlian;

public:
    
    //Fungsi construct kosong
    Dosen(){
        this->NIK = "";
        this->nama = "";
        this->jenis_kelmain = '-';
        this->asal_universitas = "";
        this->email_edu = "";
        this->NIP = "";
        this->pend_terakhir = "";
        this->keahlian = "";
    }

    //Fungsi construct dengan parameter
    Dosen(string NIK, string nama, char jenis_kelamin, string asal_universitas, string email_edu, string NIP, string pend_terakhir, string keahlian) : SivitasAkademik(NIK, nama, jenis_kelamin, asal_universitas, email_edu){
        this->NIP = NIP;
        this->pend_terakhir = pend_terakhir;
        this->keahlian = keahlian;
    }


    //Setter dan getter tiap atribut yang ada di class ini
    void set_NIP(string NIP)
    {
        this->NIP = NIP;
    }

    void set_pend_terakhir(string pend_terakhir){
        this->pend_terakhir = pend_terakhir;
    }

    void set_keahlian(string keahlian){
        this->keahlian = keahlian;
    }

    string get_NIP(){
        return this->NIP;
    }

    string get_pend_terakhir(){
        return this->pend_terakhir;
    }

    string get_keahlian(){
        return this->keahlian;
    }

    ~Dosen(){

    }
};