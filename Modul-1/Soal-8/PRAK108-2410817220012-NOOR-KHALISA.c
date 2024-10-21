#include <stdio.h>

// Definisi M_PI jika belum didefinisikan
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main() {
    // Variabel
    int putaran = 5;
    float jarak = 14; // dalam kilometer

    // Keliling taman
    float kelilingTaman = jarak / putaran;

    // Jari-jari taman menggunakan rumus keliling
    float jariJari = kelilingTaman / (2 * M_PI);

    // Output
    printf("Diketahui:\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", jarak);
    printf("\nJawaban:\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jariJari);

    return 0;
}