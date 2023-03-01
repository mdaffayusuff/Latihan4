from SivitasAkademik import SivitasAkademik

# Class Mahasiswa sebagai turunan dari class SivitasAkademik
class Mahasiswa(SivitasAkademik):
    
    # Inisialisasi attribut private
    __NIM = ""
    
    # Constructor class Mahasiswa dengan tambahan fungsi super untuk mengcontruct class parent (SivitasAkademik)
    def __init__(self, NIK="", nama="", jenis_kelamin="-", asal_universitas="", email_edu="", NIM = ""):
        super().__init__(NIK, nama, jenis_kelamin, asal_universitas, email_edu)
        self.__NIM = NIM
        
    # Setter dan Getter untuk attribut private pada class Mahasiswa
    def set_NIM(self, NIM):
        self.__NIM = NIM
        
    def get_NIM(self):
        return self.__NIM