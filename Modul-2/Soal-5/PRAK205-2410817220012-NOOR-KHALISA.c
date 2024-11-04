#include <stdio.h>
#include <math.h>

int main(){
    int tinggi, miring, alas, keliling, luas;
    printf("A: ");
    scanf("%d", &tinggi);
    printf("B: ");
    scanf("%d", &miring);

    alas = sqrt((miring * miring) - (tinggi * tinggi));
    keliling = tinggi + alas + miring;
    luas = (alas * tinggi)/2;

    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm^2\n", luas);

    return 0;
}