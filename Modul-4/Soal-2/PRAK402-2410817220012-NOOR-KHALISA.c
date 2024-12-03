#include <stdio.h>
int main(){
    int batas;

    printf("Input: ");
    scanf("%d", &batas);
    int ganjil = 1;
    while (ganjil <= batas)
    {
       printf("%d ", ganjil);
       ganjil += 2;
    }printf("\n");

    int genap = (batas % 2 == 0) ? batas : batas -1 ;
    while (genap >= 2)
    {
        printf("%d ", genap);
        genap -= 2;
    }printf("\n");

    return 0;
}