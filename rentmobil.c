#include <stdio.h>
#include <string.h>

struct Mobil {
    char nama[30];
    int harga;
};

void tampilkanDaftarMobil() {
    printf("Pilihan mobil yang disewakan\n");
    printf(" 1 - Toyota Avanza type G - Rp. 5.500.000\n");
    printf(" 2 - Honda Yaris type G - Rp. 6.500.000\n");
    printf(" 3 - Toyota Rush type G - Rp. 7.500.000\n");
}

int sewaMobil(char kodeMobil, int lamaSewa) {
    struct Mobil mobil;
    int harga = 0;

    switch (kodeMobil) {
        case '1':
            strcpy(mobil.nama, "Toyota Avanza type G");
            mobil.harga = 5500000;
            break;
        case '2':
            strcpy(mobil.nama, "Honda Yaris type G");
            mobil.harga = 6500000;
            break;
        case '3':
            strcpy(mobil.nama, "Toyota Rush type G");
            mobil.harga = 7500000;
            break;
            printf("Mobil yang dipilih tidak tersedia\n");
            return 0;
    }

    printf("Anda menyewa mobil: %s\n", mobil.nama);
    printf("Harga per hari: Rp. %d\n", mobil.harga);

    int total = mobil.harga * lamaSewa;

    printf("\n====================================================\n");
    printf("Struk pembayaran\n");
    printf("====================================================\n");
    printf("Harga per hari               : %d\n", mobil.harga);
    printf("Lama sewa                    : %d hari\n", lamaSewa);
    printf("Total keseluruhan            : %d\n", total);
    printf("\n====================================================\n");

    return total;
}

int main() {
    char namaPenyewa[50];
    char input;
    char kodeMobil;
    int lamaSewa;
    int totalPembayaran = 0;

awal:
    printf("                  Rental Mobil Rezeki             \n");
    printf("====================================================\n");
    printf("Nama penyewa                 : ");
    scanf("%s", namaPenyewa);

    do {
        tampilkanDaftarMobil();
        printf("\nMobil yang disewakan  : ");
        scanf("%c", &kodeMobil);
        printf("Jumlah lama hari menyewa: ");
        scanf("%d", &lamaSewa);

        totalPembayaran += sewaMobil(kodeMobil, lamaSewa);

        printf("\nIngin inputkan lagi? [Y/N]  : ");
        scanf(" %c", &input);
    } while (input == 'y' || input == 'Y');

    printf("Terima kasih, %s!\n", namaPenyewa);
    printf("Total pembayaran yang harus dibayar: Rp. %d\n", totalPembayaran);

    return 0;
}
