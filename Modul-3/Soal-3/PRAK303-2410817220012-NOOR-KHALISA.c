#include <stdio.h>
int main(){
    int bil;
    printf("Masukkan bilangan: ");
    scanf("%d", &bil);

    if (bil > 0)
    {
        printf("Positif");
    }else if (bil == 0)
    {
        printf("Nol");
    }else if (bil < 0)
    {
        printf("Negatif");
    }
    
    return 0;
}