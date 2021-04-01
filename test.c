#include <stdio.h>
void funkcja(int *a, int *b);

int main(void)
{
    int x = 9;
    int y = 3;
    //printf("podaj dwie liczby calkowite a oblicze sume i roznice\n");
    // scanf("%d %d", &x, &y);
    printf("Poczatkowo %d %d \n", x, y);

    funkcja( & x, & y);

    printf("suma =  %d\n", x);
    printf("roznica =  %d\n", y);
    return 0;
}

void funkcja(int *a, int *b)
{
    int podtrzymanie;
    podtrzymanie = *a;
    *a = podtrzymanie + *b;
    *b = podtrzymanie - *b;
}