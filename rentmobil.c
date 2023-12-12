#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[40], penyewa[50];
    int harga, jumlahtotal, total;
    char input;
    char kode;

	awal:
    printf("                  Rental Mobil Rezeki             \n");
    printf("====================================================\n");
    printf("Nama penyewa                : ");
    scanf("%s", penyewa);
    printf("Pilihan mobil yang di sewakan\n");
    printf(" 1 - Toyota Avanza type G - Rp. 5.500.000\n");
    printf(" 2 - Honda Yaris type G - Rp. 6.500.000\n");
    printf(" 3 - Toyota Rush Rush type G - Rp. 7.500.000\n");

    printf("\n");
    printf("\n");
    printf("Mobil yang di sewakan       : ");
    scanf(" %c", &kode);
    printf("Jumlah lama hari menyewa    : ");
    scanf("%d", &jumlahtotal);

    if (kode == '1') {
        printf("Toyota Avanza type G\n");
        harga = 5500000;
    } else if (kode == '2') {
        printf("Honda Yaris type G\n");
        harga = 6500000;
    } else if (kode == '3') {
        printf("Toyota Rush type G\n");
        harga = 7500000;
    } else {
        printf("Barang yang di pilih tidak tersedia\n");
        return 0;
    }

    printf("\n");
    printf("====================================================\n");
    printf("Struk pembayaran\n");
    printf("====================================================\n");
    printf("Nama Penyewa                : %s\n", penyewa);
    printf("Harga                       : %d\n", harga);
    printf("Jumlah                      : %d\n", jumlahtotal);

    total = harga * jumlahtotal;

    printf("Total keseluruhan           : %d\n", total);

    printf("\n");

    printf("====================================================\n");

    printf("Ingin Inputkan lagi? [Y/N]  : ");
    scanf(" %c", &input);

    if (input == 'y' || input == 'Y') {
        goto awal;
    } else {
        return 0;
    }
}
