#include <stdio.h>
int main(){
    int n, kelipatan;

    printf("Input baris pertama: ");
    scanf("%d", &n);
    printf("Input baris kedua: ");
    scanf("%d", &kelipatan);

    int total = 0;

    for (int j = 1; j <= n; j++)
    {
        int jumlah = 0;
        for (int k = j; k >= 1; k--)
        {
            int nilai = k * kelipatan;
            jumlah += nilai;
            printf("(%d * %d)", k, kelipatan);
            if (k > 1){
                printf(" + ");
            }
        }
        total += jumlah;
        printf(" = %d\n", jumlah);
    }
    printf("%d\n", total);
    return 0;
}