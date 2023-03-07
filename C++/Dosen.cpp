/* Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 4
dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

#include "header.h"

// Fungsi construct kosong
Dosen::Dosen() : SivitasAkademik("", "", '-', "", "")
{
    this->NIP = "";
    this->pend_terakhir = "";
    this->keahlian = "";
}

// Fungsi construct dengan parameter
Dosen::Dosen(string NIK, string nama, char jenis_kelamin, string asal_universitas, string email_edu, string NIP, string pend_terakhir, string keahlian) : SivitasAkademik(NIK, nama, jenis_kelamin, asal_universitas, email_edu)
{
    this->NIP = NIP;
    this->pend_terakhir = pend_terakhir;
    this->keahlian = keahlian;
}

// Setter dan getter tiap atribut yang ada di class ini
void Dosen::set_NIP(string NIP)
{
    this->NIP = NIP;
}

void Dosen::set_pend_terakhir(string pend_terakhir)
{
    this->pend_terakhir = pend_terakhir;
}

void Dosen::set_keahlian(string keahlian)
{
    this->keahlian = keahlian;
}

string Dosen::get_NIP()
{
    return this->NIP;
}

string Dosen::get_pend_terakhir()
{
    return this->pend_terakhir;
}

string Dosen::get_keahlian()
{
    return this->keahlian;
}

Dosen::~Dosen()
{
}