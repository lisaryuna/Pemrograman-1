#include <stdio.h>
int main(void){
    int baris, kolom;
    printf("Baris dan kolom: ");
    scanf("%d %d", &baris, &kolom);
    
    int matriks[baris][kolom];
    printf("Elemen-elemen matriks: ");
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            scanf("%d", &matriks[i][j]);
        }
    }
    printf("Matriks: \n");
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            printf("%d ", matriks[i][j]);
        }
        printf("\n");
    }
    return 0;
}