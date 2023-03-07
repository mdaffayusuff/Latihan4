//Include untuk penggunaan string, list, class Mahasiswa, dan class Dosen
#include <iostream>
#include <string>
#include <bits/stdc++.h>
#include "Course.cpp"
//Deklarasi std agar tidak perlu menulisnya kembali pada code
using namespace std;

//Membuat class Course
class Prodi
{
private:

    //Membuat atribut yang dibutuhkan/ditambahkan dari parent
    string nama_prodi;
    string kode;
    string fakultas;
    list<Course> courses;

public:
    
    //Fungsi construct kosong
    Prodi(){
        this->nama_prodi = "";
        this->kode = "";
        this->fakultas = "";
        this->courses.clear();
    }

    //Fungsi construct dengan parameter
    Prodi(string nama_prodi, string kode, string fakultas, Course course){
        this->nama_prodi = nama_prodi;
        this->kode = kode;
        this->fakultas = fakultas;
        this->courses.clear();
        this->courses.push_back(course);
    }


    //Setter dan getter tiap atribut yang ada di class ini
    void set_nama_prodi(string nama_prodi)
    {
        this->nama_prodi = nama_prodi;
    }

    void set_kode(string kode)
    {
        this->kode = kode;
    }

    void set_fakultas(string fakultas)
    {
        this->fakultas = fakultas;
    }

    void add_courses(Course course){
        this->courses.push_back(course);
    }

    string get_nama_prodi(){
        return this->nama_prodi;
    }

    string get_kode(){
        return this->kode;
    }

    string get_fakultas(){
        return this->fakultas;
    }

    list<Course> get_courses(){
        return this->courses;
    }

    ~Prodi(){

    }
};