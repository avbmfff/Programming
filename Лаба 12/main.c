#include <stdio.h>
#include <string.h>
#define N 256 //���������� ��������

int main()
{
    FILE *F1,*F2,*F3; //��������� �� �����
    char ch, string1[N], string2[N];
    int i=0;

    F1=fopen("input_1.txt","r");
    while((ch=getc(F1))!=EOF) //eof �������, ������� ���������� 1, ���� ��� ��������� ����� �����; � ��������� ������ ��� ���������� 0
        //getc ���������� ��������� �� ������� �������� ������ �� ������� ������
    {
        string1[i]=ch;
        i++;
    }
    string1[i]='\0'; //���������� ����� �����
    i=0;

    F2=fopen("input_2.txt","r");

    while((ch=getc(F2))!=EOF)
    {
        string2[i]=ch;
        i++;
    }

    string2[i]='\0';

    strcat(string1,string2); //������� ��� ����������� �����

    F3=fopen("output.txt","w");

    fprintf(F3,"%s",string1);
}
