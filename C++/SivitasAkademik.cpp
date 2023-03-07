//Include untuk penggunaan string dan class Human

#include <iostream>
#include <string>
#include "Human.cpp"

//Deklarasi std agar tidak perlu menulisnya kembali pada code
using namespace std;



class SivitasAkademik : public Human
{
protected:

    ///Membuat atribut yang dibutuhkan/ditambah dari parent
    string asal_universitas;
    string email_edu;

public:

    //Fungsi construct
    SivitasAkademik(){
        this->NIK = "";
        this->nama = "";
        this->jenis_kelmain = '-';
        this->asal_universitas = "";
        this->email_edu = "";
    }

    //Fungsi construct dengan parameter
    SivitasAkademik(string NIK, string nama, char jenis_kelamin, string asal_universitas, string email_edu) : Human (NIK, nama, jenis_kelamin){
        this->asal_universitas = asal_universitas;
        this->email_edu = email_edu;
    }

    //Setter dan getter tiap attribut yang ada pada class ini
    void set_asal_universitas(string asal_universitas){
        this->asal_universitas = asal_universitas;
    }

    void set_email_edu(string email_edu){
        this->email_edu = email_edu;
    }

    string get_asal_universitas(){
        return this->asal_universitas;
    }
    
    string get_email_edu(){
        return this->email_edu;
    }

    ~SivitasAkademik(){

    }
};