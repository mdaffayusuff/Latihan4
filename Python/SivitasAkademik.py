from Human import Human

class SivitasAkademik(Human):
    __asal_universitas = ""
    __email_edu = ""
    
    def __init__(self, NIK="", nama="", jenis_kelamin="-", asal_universitas="", email_edu = ""):
        super().__init__(NIK, nama, jenis_kelamin)
        self.__asal_universitas = asal_universitas
        self.__email_edu = email_edu
        
    def set_asal_universitas(self, asal_universitas):
        self.__asal_universitas = asal_universitas
        
    def set_email_edu(self, email_edu):
        self.__email_edu = email_edu
        
    