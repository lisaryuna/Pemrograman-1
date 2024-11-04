#include <stdio.h>

int main(){
    char nama[50], nim[50], paralel[50], ttl[50], alamat[50], hobby[50], nomor[50];
    printf("Nama                    : ");
    fgets(nama, sizeof(nama), stdin);
    printf("NIM                     : ");
    fgets(nim, sizeof(nim), stdin);
    printf("Kelas Paralel           : ");
    fgets(paralel, sizeof(paralel), stdin);
    printf("Tempat/Tanggal Lahir    : ");
    fgets(ttl, sizeof(ttl), stdin);
    printf("Alamat                  : ");
    fgets(alamat, sizeof(alamat), stdin);
    printf("Hobby                   : ");
    fgets(hobby, sizeof(hobby), stdin);
    printf("No. HP                  : ");
    fgets(nomor, sizeof(nomor), stdin);

    printf("\nNama                    : %s", nama);
    printf("NIM                     : %s", nim);
    printf("Kelas Paralel           : %s", paralel);
    printf("Tempat/Tanggal Lahir    : %s", ttl);
    printf("Alamat                  : %s", alamat);
    printf("Hobby                   : %s", hobby);
    printf("No. HP                  : %s", nomor);

    return 0;
}