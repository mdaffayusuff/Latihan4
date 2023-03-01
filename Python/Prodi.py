# Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 4
# dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
# yang telah dispesifikasikan. Aamiin.

from Course import Course

# Class Prodi untuk dapa dari Program Studi
class Prodi:
    
    # Inisialisasi atribut private
    __nama_prodi = ""
    __kode = ""
    __fakultas = ""
    __courses = []      # Pembuatan list untuk menyimapn objek Course
    
    
    # Constructor class Prodi
    def __init__(self, nama_prodi = "", kode = "", fakultas = "", course = Course()):
        self.__nama_prodi = nama_prodi
        self.__kode = kode
        self.__fakultas = fakultas
        self.__courses = []                 # Pengosongan list pada constructor untuk memastikan tidak ada data sebelumnya yang masih ada pada list
        self.__courses.append(course)       # Menambahkan objek COurse kedalam list sebagai objek pertama pada list
    
    
    # Setter dan Getter untuk attribut private pada class Prodi
    def set_nama_prodi(self, nama_prodi):
        self.__nama_prodi = nama_prodi
    
    def set_dosen(self, kode):
        self.__kode = kode
        
    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas
    
    def get_nama_prodi(self):
        return self.__nama_prodi
    
    def get_kode(self):
        return self.__kode
    
    def get_fakultas(self):
        return self.__fakultas
        
    # Penambahan fungsi add untuk menambahkan objek Course pada list sebagai pengganti setter
    def add_courses(self, course):
        self.__courses.append(course)
    
    # Getter untuk mendapatkan list courses
    def get_courses(self):
        return self.__courses