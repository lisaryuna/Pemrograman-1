#include <stdio.h>
#include <math.h>

int main() {
    // Alas dan tinggi segitiga
    int alas = 5;  // dalam cm
    int tinggi = 12;  // dalam cm

    // Sisi miring (sisi C) 
    int sisiA = tinggi;
    int sisiB = (int) sqrt((alas * alas) + (tinggi * tinggi));
    int sisiC = alas;  
    
    // Keliling segitiga
    int keliling = sisiA + sisiB + sisiC;

    // Luas segitiga
    int luas = (alas * tinggi) / 2;

    // Output
    printf("Diketahui:\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n\n", tinggi);
    printf("Jawab:\n");
    printf("Sisi A = %d cm\n", sisiA);
    printf("Sisi B = %d cm\n", sisiB);
    printf("Sisi C = %d cm\n", sisiC);
    printf("Keliling = %d cm\n", keliling);
    printf("Luas = %d cm\n", luas);

    return 0;
}