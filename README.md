# **DPBO Latihan 4**
### **NIM : 2100543**
### **Nama : Muhammad Daffa Yusuf Fadhilah**

Saya **_Muhammad Daffa Yusuf_** Fadhilah dengan **_NIM 2100543_** mengerjakan evaluasi **_Latihan 4_**
dalam mata kuliah **_Design Pemrograman Berorientasi Objek 2023_**
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
yang telah dispesifikasikan. Aamiin.

## **Struktur Kelas**

![DiagramClass](https://raw.githubusercontent.com/mdaffayusuff/Latihan4DPBO/c02ba68d080367c6b218eafca77e0f2cd57e3af3/Untitled%20Diagram.drawio.svg)

### **Human**
Class Human merupakan kelas yang menjadi basis dari sebagian kelas karena karekteristik attribut yang bisa dibilang dasar dari kelas-kelas lainnya yang akan dijelaskan dibawah. Attribut yang dimiliki adalah `NIK, nama,` dan `jenis_kelamin`.

### **SivitasAkademik**
Class **SivitasAkademik** merupakan class yang meruju pada orang-orang yang bekerja pada lingkungan akademik terutama kampus pada kasus ini. Contoh Sivitas akademik adalah _Dosen_ dan _Mahasiswa_. Itulah mengapa SivitasAkademik akan memiliki turunan **Dosen** dan **Mahasiswa**. Dan karena SivitasAkademik merujuk pada orang/human, maka **SivitasAkademik** akan menjadi child class dari **Human**. Attribut yang ditambahkan dari class **Human** adalah `asal_univeritas` dan `email_edu`

### **Dosen**
Class **Dosen** merupakan class keturunan dari class **SivitasAkademik** dengan tambahan atribut `NIP, pend_terakhir,` dan `keahlian`.

### **Mahasiswa**
Class **Mahasiswa** merupakan class keturunan dari class **SivitasAkademik** dengan attribut tambahan `NIM`

### **Course**
Class **Course** merupakan class yang menampung data mata kuliah yaitu `nama_matkul`, `dosen` yang merupakan data dosen yang mengajar mata kuliah tersebut, dan `mahasiswas` yang merupakan `list<Mahasiswa>` yang akan menampung data mahasiswa berupa objek dari class **Mahasiswa**. Data mata kuliah tersebut menggabarkan bahwa tiap mata kuliah, akan memiliki 1 dosen dan banyak mahasiswa yang mengampu-nya

### **Prodi**
Class **Prodi** merupakan class yang menampung data suatu Program studi diantanya adalah `nama_prodi`, `kode` dari prpodi tersebut, `fakultas` yang menaungi prodi tersebut, dan `courses` yang merupakan `list<Course>` yang akan menampung data mata kuliah yang dimiliki prodi dalam bentuk objek dari class **Course**


## **Ekskusi**
Ekseskusi dijalankan dengahn membuat program main yang memasukan inputan untuk data data yang dibutuhkan tiap kelas secara hardcode dan ditampilkan secara langsung. Berikut adalah hasilnya : 
![Hasil_Eksekusi](https://github.com/mdaffayusuff/Latihan4DPBO/blob/main/hasil_eksekusi_python.png?raw=true)
