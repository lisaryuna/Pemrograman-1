#include <stdio.h>

int main(){
    float a, b, i, j, x, y;

    printf("Masukkan nilai a, b, i, j, x, dan y secara berurutan (pisahkan dengan spasi): ");
    scanf("%f %f %f %f %f %f", &a, &b, &i, &j, &x, &y);

    float hasil = (((a - b) * i) / j) - (x + y);
    printf("Hasil: %.3f", hasil);

    return 0;
}