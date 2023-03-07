/* Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 4
dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

#include "header.h"

// Fungsi construct kosong
SivitasAkademik::SivitasAkademik() : Human("", "", '-')
{
    this->asal_universitas = "";
    this->email_edu = "";
}

// Fungsi construct dengan parameter
SivitasAkademik::SivitasAkademik(string NIK, string nama, char jenis_kelamin, string asal_universitas, string email_edu) : Human(NIK, nama, jenis_kelamin)
{
    this->asal_universitas = asal_universitas;
    this->email_edu = email_edu;
}

// Setter dan getter tiap attribut yang ada pada class ini
void SivitasAkademik::set_asal_universitas(string asal_universitas)
{
    this->asal_universitas = asal_universitas;
}

void SivitasAkademik::set_email_edu(string email_edu)
{
    this->email_edu = email_edu;
}

string SivitasAkademik::get_asal_universitas()
{
    return this->asal_universitas;
}

string SivitasAkademik::get_email_edu()
{
    return this->email_edu;
}

SivitasAkademik::~SivitasAkademik()
{
}