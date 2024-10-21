#include <stdio.h>

int main () {
    // Variabel
    int a = 4;
    int b = 8;
    int c = 3;

    // Pengecekan
    int samaDengan = (a == b);
    int lebihBesarDari = (b > c) ;
    int tidakSamaDengan =(a != c);

    // Output
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);
    printf("Apakah a sama dengan b? Jawabannya adalah %d\n", samaDengan);
    printf("Apakah b lebih besar dari c? Jawabannya adalah %d\n", lebihBesarDari);
    printf("Apakah a tidak sama dengan c? Jawabannya adalah %d\n", tidakSamaDengan);

    return 0;

}