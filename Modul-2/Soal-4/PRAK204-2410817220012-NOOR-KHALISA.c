#include <stdio.h>

int main(){
    float r, t, volume, luas, keliling;
    const float pi = 22.00 / 7.00;
    printf("Jari-jari: ");
    scanf("%f", &r);
    printf("Tinggi bejana: ");
    scanf("%f", &t);

    volume = pi * r * r * t;
    luas = 2 * pi * r * (r + t);
    keliling = (2 * pi * r);

    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}