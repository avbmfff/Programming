#include <stdio.h>
#include <stdlib.h>
#include <string.h> // ��� ������� �����

int main()
{
   char str1[1024]; //������� ������
   char str2[1024];
//��� ��������
    scanf("%s", &str1); //������ ������
    scanf("%s", &str2);

 //��������� ���� �����
   if (strcmp (str1, str2)==0) //�������� ���������� ���� �������� ���� �����,
   //�� ������� ��������� ��������� �������
      printf("The strings are the same!\n");
   else
      printf("The strings are different!\n");

    // ����������� ����� ������ � ������
    char str[1024]="0";
    int len=strlen(str2);
    strncpy (str, str2, len);
    puts(str);
    printf("Copy!\n");

    // ����������� ����� ������
    scanf("%s", &str);
    printf ("string lenght %s - %d symbols\n", str, strlen (str) );

    //����� � ������ ���������� ��������� ���������� �������
    char n; //������� ������
    scanf("%s %c", &str, &n);
    char *ach; // ��������� �� ������� ���������� � ������,
   // �� ������� �������������� �����.
      ach=strrchr (str,n); // ���� ������

    if (ach==NULL) //���� ���
      printf ("No\n");
   else
      printf ("Position  %d\n",ach-str+1);

    //����������� ����� ������� ����� ������, ����������� ������� ������ ������
    scanf("%s", &str1); //������ ������
    scanf("%s", &str2);
    int k=strspn(str1,str2);
    printf("Number %d\n", k);
}
