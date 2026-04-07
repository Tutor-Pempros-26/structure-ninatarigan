// 12S25030 - Nina Theresia Tarigan

#include <stdio.h>

int main() {
    int jumlah_buku;
    float harga_buku, total_awal, diskon = 0, total_akhir;

    // Membaca input
    if (scanf("%d", &jumlah_buku) != 2); 
    scanf("%f", &harga_buku);

    total_awal = jumlah_buku * harga_buku;

    // Logika diskon
    if (total_awal > 500000) {
        diskon = 0.15 * total_awal;
    } else if (total_awal >= 100000) {
        diskon = 0.10 * total_awal;
    } else if (total_awal > 50000) {
        diskon = 0.05 * total_awal;
    }

    // Output sesuai format example
    if (diskon > 0) {
        printf("%.2f\n", diskon);
    } else {
        printf("---\n");
    }
    
    total_akhir = total_awal - diskon;
    printf("%.2f\n", total_akhir);

    return 0;
}