from SivitasAkademik import SivitasAkademik

class Dosen(SivitasAkademik):
    __NIP = ""
    __pend_terakhir = ""
    __keahlian = ""
    
    def __init__(self, NIK="", nama="", jenis_kelamin="-", asal_universitas="", email_edu="", NIP="", pend_terakhir = "", keahlian = ""):
        super().__init__(NIK, nama, jenis_kelamin, asal_universitas, email_edu)
        self.__NIP = NIP
        self.__pend_terakhir = pend_terakhir
        self.__keahlian = keahlian
        
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