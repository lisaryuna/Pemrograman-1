#include <stdio.h>
int main(){
    int kelipatan;
    char simbol[30];

    printf("Input pertama: ");
    scanf("%d", &kelipatan);
    printf("Input kedua: ");
    scanf("%s", &simbol);

    for (int i = 1; i <= 50; i++)
    {
        if (i % kelipatan == 0)
        {
            printf("%s ", simbol);
        }
        else{
            printf("%d ", i);
        }
    }
    
    return 0;
}