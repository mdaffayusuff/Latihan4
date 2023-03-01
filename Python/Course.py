from Mahasiswa import Mahasiswa
from Dosen import Dosen

# Class Course untuk data mata kuliah
class Course:
    
    # Inisialisasi attribut private
    __nama_matkul = ""
    __dosen = Dosen()       # Composite class dosen sebagai objek pada attribut Dosen
    __mahasiswas = []       # List utnuk menyimpan objek Mahasiswa dari kelas Mahasiswa
    
    
    # Constructor class Course
    def __init__(self, nama_matkul = "", dosen = Dosen() , mahasiswa = Mahasiswa()):
        self.__nama_matkul = nama_matkul
        self.__dosen = dosen
        self.__mahasiswas = []                  # Pemngosongan list agar mahasiswa dari proses sebelumnya terhapus sebelum mengconstruct class Course
        self.__mahasiswas.append(mahasiswa)     # Memasukan object mahasiswa sebagai objek pertama pada list
    
    # Setter dan Getter untuk attribut private pada class Course
    def set_nama_matkul(self, nama_matkul):
        self.__nama_matkul = nama_matkul
    
    def set_dosen(self, dosen):
        self.__dosen = dosen
    
    def get_nama_matkul(self):
        return self.__nama_matkul
    
    def get_dosen(self):
        return self.__dosen
    
    # Penambahan fungsi add utnuk menambahkan objek mahasiswa kedalam list sebagai pengganti setter
    def add_mahasiswa(self, mahasiswa):
        self.__mahasiswas.append(mahasiswa)
    
    # Fungsi Getter untuk mendapatkan list mahasiswas
    def get_mahasiswas(self):
        return self.__mahasiswas
    
        