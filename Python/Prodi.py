from Course import Course

class Prodi:
    __nama_prodi = ""
    __kode = ""
    __fakultas = ""
    __courses = []
    
    def __init__(self, nama_prodi, kode, fakultas, course):
        self.__nama_prodi = nama_prodi
        self.__kode = kode
        self.__fakultas = fakultas
        self.__courses.append(course)
    
    def set_nama_prodi(self, nama_prodi):
        self.__nama_prodi = nama_prodi
    
    def set_dosen(self, kode):
        self.__kode = kode
        
    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas
    
    def add_courses(self, course):
        self.__courses.append(course)
    
    def get_nama_prodi(self):
        return self.__nama_prodi
    
    def get_kode(self):
        return self.__kode
    
    def get_fakultas(self):
        return self.__fakultas
    
    def get_courses(self):
        return self.__courses