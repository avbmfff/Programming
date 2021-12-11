#include <stdio.h>
#include <string.h>
#define N 256 //количество символов

int main()
{
    FILE *F1,*F2,*F3; //указатели на файлы
    char ch, string1[N], string2[N];
    int i=0;

    F1=fopen("input_1.txt","r");
    while((ch=getc(F1))!=EOF) //eof функция, которая возвращает 1, если был достигнут конец файла; в противном случае она возвращает 0
        //getc возвращает следующий за текущей позицией символ во входном потоке
    {
        string1[i]=ch;
        i++;
    }
    string1[i]='\0'; //определяем конец файла
    i=0;

    F2=fopen("input_2.txt","r");

    while((ch=getc(F2))!=EOF)
    {
        string2[i]=ch;
        i++;
    }

    string2[i]='\0';

    strcat(string1,string2); //функция для объединения строк

    F3=fopen("output.txt","w");

    fprintf(F3,"%s",string1);
}
