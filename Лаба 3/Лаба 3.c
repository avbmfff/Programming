#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;

    scanf("%x", &a); //запрашиваем число в 16
    printf("%o\n", a); //выводим в 8

    printf( "%x\n", a, a << 3); //сдвиг влево на 3

    printf("%x %x\n", a, ~a); //битовая операция -

    scanf("%o", &b);
    printf("%o", a^b); //исключающее или
}
