# Saya Muhammad Daffa Yusuf Fadhilah dengan NIM 2100543 mengerjakan evaluasi Latihan 4
# dalam mata kuliah Design Pemrograman Berorientasi Objek 2023
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti
# yang telah dispesifikasikan. Aamiin.

from Prodi import Prodi
from Course import Course
from Mahasiswa import Mahasiswa
from Dosen import Dosen

# Membuat list untuk meanampung kumpulan prodi ketika prodi yang dimiliki lebih dari 1
theList = []

# Pembuatan objek mahasiswa
mhs1 = Mahasiswa("600028830020", "Bambang_Sahputra", "L", "UPI", "Bambang@upi.edu", "1908762")
mhs2 = Mahasiswa("600028839021", "Yuliana_Sari", "P", "UPI", "Yuli@upi.edu", "1908212")

# Pembuatan objek dosen
dsn1 = Dosen("198028830020", "Herlina", "P", "UPI", "Her@upi.edu", "198789", "S2", "Sistem_Data")

# Pembuatan objek course
mat_kul1 = Course("Sistem_Basis_Data", dsn1, mhs1)

# Menambang mahasiswa pada course mat_kul1
mat_kul1.add_mahasiswa(mhs2)

# Membuat onjek prodi
prod1 = Prodi("FPMIPA", "1902", "Ilmu_Komputer", mat_kul1)


# Pembuatan objek mahasiswa untuk kedua kalinya
mhs3 = Mahasiswa("600028878943", "Gasai_Pamungkas", "L", "UPI", "GasaiP@upi.edu", "2099189")
mhs4 = Mahasiswa("600020927356", "Fitriani_Adinda", "P", "UPI", "FitAdinda@upi.edu", "1908442")

# Pembuatan objek dosen utnuk kedua kalinya
dsn2 = Dosen("198028830020", "Efendi Abdullah", "L", "UPI", "EfendiAbdul@upi.edu", "198789", "S3", "Server_Managment")

# Pembuatan objek course untuk kedua kalinya
mat_kul2 = Course("Jaringan_Komputer", dsn2, mhs3)

# Menambang mahasiswa pada course mat_kul2
mat_kul2.add_mahasiswa(mhs4)

# Menambahkan course mat_kul2 kedalam data objek prodi prod1
prod1.add_courses(mat_kul2)

# Memasukan objek prodi prod1 kedalam list tampungan prodi
theList.append(prod1)

# Printing/Output
for data in theList:
    print()
    print(data.get_kode(), "|", data.get_nama_prodi(), "(" + data.get_fakultas() + ")")
    for courses in data.get_courses():
        print("     " + courses.get_nama_matkul(), "oleh", courses.get_dosen().get_nama(), "(" + courses.get_dosen().get_jenis_kelamin() + ")", "(NIP:", courses.get_dosen().get_NIP() +", NIK:", courses.get_dosen().get_NIK() + ", Pendidikan Terkahir:", courses.get_dosen().get_pend_terakhir() + ", Keahlian:", courses.get_dosen().get_keahlian() + ", Asal Universitas:", courses.get_dosen().get_asal_universitas() + ", Email.edu:" , courses.get_dosen().get_email_edu() + ")")
        print("         Mahasiswa :")
        for Mhs in courses.get_mahasiswas():
            print("             -", Mhs.get_NIM(), "|", Mhs.get_nama(), "(" + Mhs.get_jenis_kelamin() + ") (NIM:", Mhs.get_NIM() + ", NIK:", Mhs.get_NIK() + ", Asal Universitas:", Mhs.get_asal_universitas() + ", Email.edu:", Mhs.get_email_edu() + ")")
        
        print()