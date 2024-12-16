#include <stdio.h>
int main(){
    int ruang;
    printf("Jumlah ruangan: ");
    scanf("%d", &ruang);

    int zetsu[ruang];
    int hasil[ruang];
    printf("Zetsu putih: ");
    for (int i = 0; i < ruang; i++)
    {
        scanf("%d", &zetsu[i]);
    }
    for (int i = 0; i < ruang; i++)
    {
        hasil[i] = zetsu[i] * (i + 1);
    }
    for (int i = 0; i < ruang; i++)
    {
        printf("%d ", hasil[i]);
    }
    printf("\n");
    return 0;
}