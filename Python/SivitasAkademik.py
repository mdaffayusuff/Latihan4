# Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 4
# dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
# yang telah dispesifikasikan. Aamiin.

from Human import Human

# Class SivitasAkademik yang menjadi turunan dari class Human
class SivitasAkademik(Human):
    
    # Inisialisasi attribut private
    __asal_universitas = ""
    __email_edu = ""
    
    # Construct class SivitasAkademik dengan tambahan fungsi super untuk mengconstruct class parentnya (Human)
    def __init__(self, NIK="", nama="", jenis_kelamin="-", asal_universitas="", email_edu = ""):
        super().__init__(NIK, nama, jenis_kelamin)
        self.__asal_universitas = asal_universitas
        self.__email_edu = email_edu
        
    
    # Setter dan Getter untuk attribut untuk class SivitasAkademik
    def set_asal_universitas(self, asal_universitas):
        self.__asal_universitas = asal_universitas
        
    def set_email_edu(self, email_edu):
        self.__email_edu = email_edu
        
    def get_asal_universitas(self):
        return self.__asal_universitas
    
    def get_email_edu(self):
        return self.__email_edu        
    