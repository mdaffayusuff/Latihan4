from Mahasiswa import Mahasiswa
from Dosen import Dosen

class Course:
    __nama_matkul = ""
    __dosen = Dosen()
    __mahasiswas = []
    
    def __init__(self, nama_matkul = "", dosen = Dosen() , mahasiswa = Mahasiswa()):
        self.__nama_matkul = nama_matkul
        self.__dosen = dosen
        self.__mahasiswas = []
        self.__mahasiswas.append(mahasiswa)
    
    def set_nama_matkul(self, nama_matkul):
        self.__nama_matkul = nama_matkul
    
    def set_dosen(self, dosen):
        self.__dosen = dosen
    
    def add_mahasiswa(self, mahasiswa):
        self.__mahasiswas.append(mahasiswa)
    
    def get_nama_matkul(self):
        return self.__nama_matkul
    
    def get_dosen(self):
        return self.__dosen
    
    def get_mahasiswas(self):
        return self.__mahasiswas
    
        