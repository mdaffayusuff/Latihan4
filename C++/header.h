/* Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 4
dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin. */

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

class Human
{
private:
    // Menambahkan attribut yang dibutuhkan
    string NIK;
    string nama;
    char jenis_kelmain;

public:
    // Fungsi construct kosong
    Human();

    // Fungsi construct dengan parameter
    Human(string NIK, string nama, char jenis_kelamin);

    // setter dan getter tiap atribut yang ada pada kelas ini
    void set_NIK(string NIK);

    void set_nama(string nama);

    void set_jenis_kelamin(char jenis_kelamin);

    string get_NIK();

    string get_nama();

    char get_jenis_kelamin();

    ~Human();
};

class SivitasAkademik : public Human
{
private:
    /// Membuat atribut yang dibutuhkan/ditambah dari parent
    string asal_universitas;
    string email_edu;

public:
    // Fungsi construct
    SivitasAkademik();

    // Fungsi construct dengan parameter
    SivitasAkademik(string NIK, string nama, char jenis_kelamin, string asal_universitas, string email_edu);

    // Setter dan getter tiap attribut yang ada pada class ini
    void set_asal_universitas(string asal_universitas);

    void set_email_edu(string email_edu);

    string get_asal_universitas();

    string get_email_edu();

    ~SivitasAkademik();
};

class Mahasiswa : public SivitasAkademik
{
private:
    // Membuat atribut yang dibutuhkan/ditambahkan dari parent
    string NIM;

public:
    // Fungsi construct kosong
    Mahasiswa();

    // Fungsi construct dengan parameter
    Mahasiswa(string NIK, string nama, char jenis_kelamin, string asal_universitas, string email_edu, string NIM);

    // Setter dan getter tiap atribut yang ada di class ini
    void set_NIM(string NIM);

    string get_NIM();

    ~Mahasiswa();
};

class Dosen : public SivitasAkademik
{
private:

    //Membuat atribut yang dibutuhkan/ditambahkan dari parent
    string NIP;
    string pend_terakhir;
    string keahlian;

public:
    
    //Fungsi construct kosong
    Dosen();
    //Fungsi construct dengan parameter
    Dosen(string NIK, string nama, char jenis_kelamin, string asal_universitas, string email_edu, string NIP, string pend_terakhir, string keahlian);

    //Setter dan getter tiap atribut yang ada di class ini
    void set_NIP(string NIP);

    void set_pend_terakhir(string pend_terakhir);

    void set_keahlian(string keahlian);

    string get_NIP();

    string get_pend_terakhir();

    string get_keahlian();

    ~Dosen();
};

class Course
{
private:

    //Membuat atribut yang dibutuhkan/ditambahkan dari parent
    string nama_matkul;
    Dosen dosen;
    list<Mahasiswa> mahasiswas;

public:
    
    //Fungsi construct kosong
    Course();

    //Fungsi construct dengan parameter
    Course(string nama_matkul, Dosen dosen, Mahasiswa mahasiswa);

    //Setter dan getter tiap atribut yang ada di class ini
    void set_nama_matkul(string nama_matkul);

    void set_dosen(Dosen dosen);

    void add_mahasiswa(Mahasiswa mahasiswa);

    string get_nama_matkul();

    Dosen get_dosen();

    list<Mahasiswa> get_mahasiswas();

    ~Course();
};

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
    Prodi();

    //Fungsi construct dengan parameter
    Prodi(string nama_prodi, string kode, string fakultas, Course course);

    //Setter dan getter tiap atribut yang ada di class ini
    void set_nama_prodi(string nama_prodi);

    void set_kode(string kode);

    void set_fakultas(string fakultas);

    void add_courses(Course course);

    string get_nama_prodi();

    string get_kode();

    string get_fakultas();

    list<Course> get_courses();

    ~Prodi();
};