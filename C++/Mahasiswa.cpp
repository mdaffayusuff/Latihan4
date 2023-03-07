/* Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 4
dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

#include "header.h"

// Fungsi construct kosong
Mahasiswa::Mahasiswa() : SivitasAkademik("", "", '-', "", "")
{
    this->NIM = "";
}

// Fungsi construct dengan parameter
Mahasiswa::Mahasiswa(string NIK, string nama, char jenis_kelamin, string asal_universitas, string email_edu, string NIM) : SivitasAkademik(NIK, nama, jenis_kelamin, asal_universitas, email_edu)
{
    this->NIM = NIM;
}

// Setter dan getter tiap atribut yang ada di class ini
void Mahasiswa::set_NIM(string NIM)
{
    this->NIM = NIM;
}

string Mahasiswa::get_NIM()
{
    return this->NIM;
}

Mahasiswa::~Mahasiswa()
{
}
