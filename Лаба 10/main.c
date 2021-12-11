#include <stdio.h>
#include <stdlib.h>

int * counting (int n, int *k)
{ *k=0;
    int number = n;
    while(n>0){ //подсчет количество цифр
        n=n/10;
        *k+=1;
    }
    int *a=malloc(*k*sizeof(int));
    int count = 0;

    while(number!=0) //формируем массив цифр
    {
        a[count++] = number % 10;
        number /= 10;
    }

    return a;
}

int summ (int n){ //рекурсивный поиск суммы цифр
    if (n==0) return 0;
    return (n%10)+summ(n/10);
}



int main()
{
    int n, i;
    scanf("%d", &n);
    int k=0, nc=n;


    int *arr=counting(n, &k);
    printf("%d", summ(n));
    for(i=k-1; i>=0; i--)
    printf("\n%d ", arr[i]);

}
