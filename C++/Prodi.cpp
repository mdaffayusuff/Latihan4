/* Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 4
dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

#include "header.h"

// Fungsi construct kosong
Prodi::Prodi()
{
    this->nama_prodi = "";
    this->kode = "";
    this->fakultas = "";
    this->courses.clear();
}

// Fungsi construct dengan parameter
Prodi::Prodi(string nama_prodi, string kode, string fakultas, Course course)
{
    this->nama_prodi = nama_prodi;
    this->kode = kode;
    this->fakultas = fakultas;
    this->courses.clear();
    this->courses.push_back(course);
}

// Setter dan getter tiap atribut yang ada di class ini
void Prodi::set_nama_prodi(string nama_prodi)
{
    this->nama_prodi = nama_prodi;
}

void Prodi::set_kode(string kode)
{
    this->kode = kode;
}

void Prodi::set_fakultas(string fakultas)
{
    this->fakultas = fakultas;
}

void Prodi::add_courses(Course course)
{
    this->courses.push_back(course);
}

string Prodi::get_nama_prodi()
{
    return this->nama_prodi;
}

string Prodi::get_kode()
{
    return this->kode;
}

string Prodi::get_fakultas()
{
    return this->fakultas;
}

list<Course> Prodi::get_courses()
{
    return this->courses;
}

Prodi::~Prodi()
{
}