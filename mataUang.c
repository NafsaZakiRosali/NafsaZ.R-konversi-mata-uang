#include <stdio.h> // ini biar bisa pake printf scanf dll

// membuat fungsi khusus dlu untuk ngitung konversi mata uang dari nilai rupiah ke mata uang asing
float konversi(float rupiah, int menu) //nama fungsi beserta parameter karna butuh data buat diproses
{
    float krus[]={16544.80, 18614.00, 113.81};// nilai tukar tahun skrg bulan mei dari dolar, euro dan yen
    return rupiah / krus[menu - 1]; //untuk mendapatkan hasil konversi dgn bagiin jumlah rupiah dengan kurs yang sesuai, lalu balikin hasilnya ke pemanggil fungsi.
}
int main(){
    // varibel
    int menu; // menyimpan pilihan menu 
    int ulangi = 1; // menyimpan jumlah ulangi untuk perulangan yg dijalankan
    float rupiah, hasil; // meyimpan nilai input uang dan hasil dari konversi
    char mataUang[3][10] = { "Dolar", "Euro", "Yen" }; // bikin array 2D ini buat nyimpen nama mata uang biar bisa ditampilin pas konversi
    float krus[]={16544.80, 18614.00, 113.81}; // menyimpan nilai tukar dari 3 mata uang

    while(ulangi)//perulangan akan terus berjalan selama ulangi bernilai 1
    {
        // untuk menampilkan daftar menu di terminal
        printf("\n==== HALLO SILAHKAN PILIH! ====\n");
        printf("1. Konversi ke Dolar\n"); // untuk konversi ke dolar
        printf("2. Konversi ke Euro\n"); // untuk konversi ke euro
        printf("3. Konversi ke Yen\n"); // untuk konversi ke yen
        printf("4. Melihat krus saat ini\n"); // untuk menampilkan krus saat ini
        printf("5. Keluar program\n"); // untuk user keluar program jika sudah tidak ingin konversi
        printf(" SILAHKAN PILIH MENU (1-5): ");
        scanf("%d", &menu);// ini buat baca input user dan simpen divariabel menu

        if(menu >= 1 && menu <= 3)// jika menu yg dipilih user adalah 1,2 atau 3 maka akan berlanjut ke perintah
        {
            printf("Masukan uang kamu: ");// memerintahkan user untuk masukan nilai rupiah 
            scanf("%f", &rupiah); // menginput nilai rupiah dan tersimpan
            hasil = konversi(rupiah, menu); // menggail fungsi yng dibuat diatas dan hasilnya tersimpan
            printf("Hasil konversi: %.2f %s\n", hasil, mataUang [menu - 1]); // perintah akan menampilkan hasil konversi 2 angka dibelakang koma dan nama mata uang
        }
        
        else if (menu == 4)// jika kondisi user memilih menu 4
        {
            printf("\n=== Krus mata uang saat ini ===\n");
            for(int i = 0; i < 3; i++){
                printf("%s: %2f Rupiah\n", mataUang[i], krus[i]);
            }
        }
        else if (menu == 5)// jika kondisi user meminta selain menu 1,2,3 yaitu 4 (keluar program)
        {
            printf("Konversi selesai! Makasih udah mampirr\n");// menampilkan berhasil keluar program
            ulangi = 0; // set ulangi ke 0 biar program keluar
        }
        else // untuk nilai inputnya yang ga valid
        {
            printf("Tidak ada pilihan. Silahkan pilih ulang: ");// menampilkan tidak valid
        }
    }
    
    return 0; 
}