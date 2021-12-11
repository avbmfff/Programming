#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Для функций строк

int main()
{
   char str1[1024]; //создаем строки
   char str2[1024];
//как работают
    scanf("%s", &str1); //вводим строки
    scanf("%s", &str2);

 //сравнение двух строк
   if (strcmp (str1, str2)==0) //побайтно сравниваем коды символов двух строк,
   //на которые указывают аргументы функции
      printf("The strings are the same!\n");
   else
      printf("The strings are different!\n");

    // копирование одной строки в другую
    char str[1024]="0";
    int len=strlen(str2);
    strncpy (str, str2, len);
    puts(str);
    printf("Copy!\n");

    // Определение длины строки
    scanf("%s", &str);
    printf ("string lenght %s - %d symbols\n", str, strlen (str) );

    //Поиск в строке последнего вхождения указанного символа
    char n; //искомый символ
    scanf("%s %c", &str, &n);
    char *ach; // Указатель на искомую переменную в строке,
   // по которой осуществляется поиск.
      ach=strrchr (str,n); // Ищем символ

    if (ach==NULL) //если нет
      printf ("No\n");
   else
      printf ("Position  %d\n",ach-str+1);

    //Определение длины отрезка одной строки, содержащего символы второй строки
    scanf("%s", &str1); //вводим строки
    scanf("%s", &str2);
    int k=strspn(str1,str2);
    printf("Number %d\n", k);
}
