/* Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 4
dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

#include "header.h"

// Fungsi construct kosong
Course::Course()
{
    this->nama_matkul = "";
    this->dosen = Dosen();
    this->mahasiswas.clear();
}

// Fungsi construct dengan parameter
Course::Course(string nama_matkul, Dosen dosen, Mahasiswa mahasiswa)
{
    this->nama_matkul = nama_matkul;
    this->dosen = dosen;
    this->mahasiswas.clear();
    this->mahasiswas.push_back(mahasiswa);
}

// Setter dan getter tiap atribut yang ada di class ini
void Course::set_nama_matkul(string nama_matkul)
{
    this->nama_matkul = nama_matkul;
}

void Course::set_dosen(Dosen dosen)
{
    this->dosen = dosen;
}

void Course::add_mahasiswa(Mahasiswa mahasiswa)
{
    this->mahasiswas.push_back(mahasiswa);
}

string Course::get_nama_matkul()
{
    return this->nama_matkul;
}

Dosen Course::get_dosen()
{
    return this->dosen;
}

list<Mahasiswa> Course::get_mahasiswas()
{
    return this->mahasiswas;
}

Course::~Course()
{
}