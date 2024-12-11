#include <stdio.h>
#include <stdlib.h>
int mutlak(int angka){
    return abs(angka);
}
int hitung(int nilai1, int nilai2){
    return mutlak(nilai1 - nilai2);
}

int main(){
    int x1, y1, x2, y2, hasil;

    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    hasil = hitung(x1, x2) + hitung (y1,y2);
    printf("%d", mutlak(hasil));

    return 0;
}