#include <stdio.h>
#include <string.h>
void cekPesan(char kode[], char pesan[]);
int main(){
    char kode[100], pesan[100];
    printf("Kode: ");
    fgets(kode, sizeof(kode), stdin);
    printf("Pesan: ");
    fgets(pesan, sizeof(pesan), stdin);
    kode[strcspn(kode, "\n")] = 0;
    pesan[strcspn(pesan, "\n")] = 0;
    cekPesan(kode, pesan);
    return 0;
}

void cekPesan(char kode[], char pesan[]){
    int panjangKode = strlen(kode);
    int panjangPesan = strlen(pesan);
    int bintang = 0, pagar = 0;
    char hasil[100];
    if (panjangKode != panjangPesan)
    {
        printf("Panjang kalimat berbeda, pesan palsu.");
        return;
    }
    for (int i = 0; i < panjangKode; i++)
    {
        if (kode[i] == pesan[i])
        {
            hasil[i] = '*';
            bintang++;
        }else
        {
            hasil[i] = '#';
            pagar++;
        }
    }
    hasil[panjangKode] = '\0';
    printf("%s\n", hasil);
    printf("* = %d\n", bintang);
    printf("# = %d\n", pagar);
    if (bintang >= pagar)
    {
        printf("Pesan Asli");
    }else
    {
        printf("Pesan Palsu.");
    }
}