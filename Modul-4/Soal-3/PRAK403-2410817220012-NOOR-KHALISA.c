#include <stdio.h>

void cetakBersilangan(int a, int b) {
    int i, j;

    if (a < b) {
        i = a;
        j = b;
        while (i <= b && j >= a) {
            printf("%d %d", i, j);
            if (i + 1 <= b || j - 1 >= a) {
                printf(" - ");
            }
            i++;
            j--;
        }
        printf("\n");
    } else {
        i = a;
        j = b;
        while (i >= b && j <= a) {
            printf("%d %d", i, j);
            if (i - 1 >= b || j + 1 <= a) {
                printf(" - ");
            }
            i--;
            j++;
        }
        printf("\n");
    }
}

int main() {
    int a, b;

    printf("Input pertama: ");
    scanf("%d", &a);
    printf("Input kedua: ");
    scanf("%d", &b);

    cetakBersilangan(a, b);

    return 0;
}