#include <stdio.h>
int main(){
    int total_detik, hari, jam, menit, detik;
    printf("Masukkan jumlah detik: ");
    scanf("%d", &total_detik);

    if (total_detik >= 86400)
    {hari = total_detik / 86400;
    total_detik = total_detik % 86400;}
    else
    {hari = 0;}

    if (total_detik >= 3600)
    {jam = total_detik / 3600;
    total_detik = total_detik % 3600;}
    else
    {jam = 0;}

    if (total_detik >= 60)
    {menit = total_detik / 60;
    total_detik = total_detik % 60;}
    else
    {menit = 0;}

    detik = total_detik;

    if (hari > 0)
    {printf("%d hari %02d:%02d:%02d", hari, jam, menit, detik);}
    else
    {printf("%02d:%02d:%02d", jam, menit, detik);}
    
    return 0;
}