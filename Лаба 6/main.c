#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a[4] = {-8.8, 11.2, 64.67, 55.32}; //������� ������������ ������ �� 4 ���������
    float *b = a; // ��������� �� ������
    for(int i=0; i<4 ; i++){
        printf("%f ", *b++);} //������� ������ ������������ �����

   /* float *c;
    int k=4;
    c = (float*)malloc(k*sizeof(float)); //���������� ������� malloc ��� ��������� ������
    c[0] = -8.8; // ���������
    c[1] = 11.2;
    c[2] = 64.67;
    c[3] = 55.32;
    printf("\n");

    for(int i=0; i<4; i++){ //�������
        printf("%f ", *c++);}

    free(c);������ � ����������*/

   float *c;  // ��������� �� ������
  int i, n=4;
    c = (float*)malloc(n * sizeof(float));
    c[0] = -8.8; // ���������
    c[1] = 11.2;
    c[2] = 64.67;
    c[3] = 55.32;
    printf("\n");
    for (i = 0; i<n; i++)
    printf("%f ", c[i]);
  free(c);
}
