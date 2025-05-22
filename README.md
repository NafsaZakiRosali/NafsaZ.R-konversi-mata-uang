# Mini Proyek - Coding untuk Kakak Tingkat

## Identitas Mahasiswa
- Nama: Nafsa Zaki Rosali
- NIM: 2402099
- Kelas: 2A PSTI
  
## Identitas Kakak Tingkat
- Nama: Aditya Arya Sukma
- Angkatan: 2022
- Program Studi: Pendidikan Sistem dan Teknologi Informasi
  
## Permintaan Program
> “Akang mau dibuatkan program konversi rupiah ke dolar, euro, dan yen, ada menu pilihannya, dan bisa dipakai berkali-kali tanpa keluar program.”

## Penjelasan Program
- Bahasa pemrograman yang digunakan: C
- Fitur utama:
Input nilai rupiah
Perhitunga otomatis: rupiah / krus[menu - 1];
Output hasil konversi
   
- Konsep yang digunakan:
Input: user input nilai rupiah (scanf) Output: menampilkan hasil konversi (printf)
Variabel: int menu, ulangi, float rupiah, krus, hasil, dan char mata uang.
IF-ELSE: IF (mengecek jika memilih menu konversi 1,2, atau 3 kemudian didalam IF di panggil fungsi konversi), ELSE IF (kondisi menu 4 menampilkan krus saat ini dan kondisi menu 5 jika memilih keluar program) dan ELSE (jika input tidak valid/tidak ada dimenu).
WHILE: while ini digunakan untuk mengulang jika kondisi terpenuhi. Dan untuk user memilih menu konversi beberapa kali sampai user memilih keluar program. 
FOR: melakukan perulangan 3 kali untuk menampilkan mata uang dan krus 
FUNGSI: membuat fungsi float konversi(float rupiah, int menu) menghitung hasil konversi hanya cukup dibagi dengan nilai krus masing-masing.
ARRAY: array krus(nilai krus bulan mei 2025) dan array mata uang (menggunakan array 2D agar nama mata uang bisa langsung dipanggil sesuai menu ketika perintah hasil konversi).
   
## Link Video Demo
