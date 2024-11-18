#include <stdio.h>
int main(){
    int nilai;
    printf("Masukkan nilai: ");
    scanf("%d", &nilai);
    if (nilai >= 80)
    {
        printf("A");
    }else if (nilai >= 70 && nilai <= 79)
    {
        printf("B");
    }else if (nilai >= 60 && nilai <= 69)
    {
        printf("C");
    }else if (nilai >= 50 && nilai <= 59)
    {
        printf("D");
    }else if (nilai < 50)
    {
        printf("E");
    }

    return 0;
}