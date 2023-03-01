# Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 4
# dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
# yang telah dispesifikasikan. Aamiin.

from SivitasAkademik import SivitasAkademik

# Class Dosen sebagai turunan dari class SivitasAkademik
class Dosen(SivitasAkademik):
    
    # Inisialisasi attribut private
    __NIP = ""
    __pend_terakhir = ""
    __keahlian = ""
    
    # Contructor class Dosen dengan tambahan fungsi super untuk construct class parent (SivitasAkademik)
    def __init__(self, NIK="", nama="", jenis_kelamin="-", asal_universitas="", email_edu="", NIP="", pend_terakhir = "", keahlian = ""):
        super().__init__(NIK, nama, jenis_kelamin, asal_universitas, email_edu)
        self.__NIP = NIP
        self.__pend_terakhir = pend_terakhir
        self.__keahlian = keahlian
        
    # Setter dan Getter untuk attribut private pada class Dosen
    def set_NIP(self, NIP):
        self.__NIP = NIP
    
    def set_pend_terakhir(self, pend_terakhir):
        self.__pend_terakhir = pend_terakhir
    
    def set_keahlian(self, keahlian):
        self.__keahlian = keahlian
    
    def get_NIP(self):
        return self.__NIP
    
    def get_pend_terakhir(self):
        return self.__pend_terakhir
    
    def get_keahlian(self):
        return self.__keahlian