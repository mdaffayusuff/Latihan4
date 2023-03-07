/* Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 4
dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */
#include "header.h"

// Fungsi construct kosong
Human ::Human()
{
    this->NIK = "";
    this->nama = "";
    this->jenis_kelmain = '-';
}

// Fungsi construct dengan parameter
Human ::Human(string NIK, string nama, char jenis_kelamin)
{
    this->NIK = NIK;
    this->nama = nama;
    this->jenis_kelmain = jenis_kelamin;
}

// setter dan getter tiap atribut yang ada pada kelas ini
void Human::set_NIK(string NIK)
{
    this->NIK = NIK;
}

void Human::set_nama(string nama)
{
    this->nama = nama;
}

void Human::set_jenis_kelamin(char jenis_kelamin)
{
    this->jenis_kelmain = jenis_kelamin;
}

string Human::get_NIK()
{
    return this->NIK;
}

string Human::get_nama()
{
    return this->nama;
}

char Human::get_jenis_kelamin()
{
    return this->jenis_kelmain;
}

Human::~Human()
{
}