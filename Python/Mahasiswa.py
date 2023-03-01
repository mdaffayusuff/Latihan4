from SivitasAkademik import SivitasAkademik

class Mahasiswa(SivitasAkademik):
    __NIM = ""
    
    def __init__(self, NIK="", nama="", jenis_kelamin="-", asal_universitas="", email_edu="", NIM = ""):
        super().__init__(NIK, nama, jenis_kelamin, asal_universitas, email_edu)
        self.__NIM = NIM
        
    def set_NIM(self, NIM):
        self.__NIM = NIM
        
    def get_NIM(self):
        return self.__NIM