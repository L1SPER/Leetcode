#include"stdio.h"
#include"stdlib.h"

int main()
{
    int sayi;
    int toplam = 0;
    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    for (int i = 1; i <= sayi; i += 2)
    {
        toplam += i;
        printf("%d ", i);
        if (i + 2 <= sayi)
        {
            printf("+ ");
        }

    }
    printf("= %d\n", toplam);
}