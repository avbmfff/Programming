#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    // преобразование цифры, введенной с консоли в строку,
    //содержащую соответсвующее числительное

    char *str[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char res[10];
    int n;
    scanf("%d", &n);
    strcpy(res, str[n]);
    printf("%s", res);

    //вывод на консоль простых чисел, начиная с 2 и заканчивая
    //ближайшим простым число, меньшим либо равным числу, введенному с консоли

    int k;
    scanf("%d", &k);
    bool prime; //логическая переменная для оценки числа
    for(int i=2; i<=k; i++){
            prime=true;
        for(int j=2; j<i; j++){
            if (i%j==0) {
                prime=false;
                    break;}}
        if(prime) printf("%d ",i);
    }

}
