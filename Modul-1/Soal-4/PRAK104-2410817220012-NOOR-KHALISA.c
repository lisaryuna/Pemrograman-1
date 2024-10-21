#include <stdio.h>

int main() {
    // Harga sepatu
    float hargaSepatuA = 400000;
    float hargaSepatuB = 350000;

    // Diskon
    float diskonA = 0.13; // 13%
    float diskonB = 0.21; // 21%
    
    float hargaSetelahDiskonA = hargaSepatuA * (1 - diskonA);
    float hargaSetelahDiskonB = hargaSepatuB * (1 - diskonB);

    // Output
    printf("Harga sepatu A adalah %.0f\n", hargaSepatuA);
    printf("Harga sepatu B adalah %.0f\n", hargaSepatuB);
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %.0f\n", hargaSetelahDiskonA);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %.0f\n", hargaSetelahDiskonB);

    return 0;
}