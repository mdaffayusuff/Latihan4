class Human:
    __NIK = ""
    __nama = ""
    __jenis_kelamin = "-"
    
    def __init__(self, NIK = "", nama = "", jenis_kelamin = "-"):
        self.__NIK = NIK
        self.__nama = nama
        self.__jenis_kelamin = jenis_kelamin
    
    def set_NIK(self, NIK):
        self.__NIK = NIK
    
    def set_nama(self, nama):
        self.__nama = nama
        
    def set_jenis_kelamin(self, jenis_kelamin):
        self.__jenis_kelamin = jenis_kelamin
        
    def get_NIK(self):
        return self.__NIK
    
    def get_nama(self):
        return self.__nama
    
    def get_jenis_kelamin(self):
        return self.__jenis_kelamin
    
