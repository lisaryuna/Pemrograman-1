#include <stdio.h>

int main() {
    // Jumlah pasukan Yu Zhong dan jumlah pahlawan
    int jumlahPasukan = 958730;
    int jumlahPahlawan = 5;

    // Jumlah pasukan yang harus dikalahkan setiap pahlawan
    int pasukanPerPahlawan = jumlahPasukan / jumlahPahlawan;

    // Output
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", jumlahPasukan);
    printf("Jumlah pahlawan = %d\n", jumlahPahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukanPerPahlawan);

    return 0;
}