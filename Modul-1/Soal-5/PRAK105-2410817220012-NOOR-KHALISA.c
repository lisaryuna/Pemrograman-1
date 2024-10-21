#include <stdio.h>

int main () {
    // Variabel 
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;

    // Total sisa bagi
    int hasil = (int) (a % b) + (x % y);

    // Output
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", hasil);

    return 0;

}