#include <stdio.h>

int main() {
    // Variabel
    int a = 4;
    int b = 8;
    int c = 3;

    // Hasil kombinasi
    float hasil = (float)(a * b) / c;

    // Output
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("Hasil dari a dikali b dibagi c adalah %.6f\n", hasil);

    return 0;
}