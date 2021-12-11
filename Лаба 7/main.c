#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle { //��������� ��� ������������ � ����������� ������ � ���������
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
};

float area(struct triangle Tr) { //������� ��� ���������� �������
    return 0,5*((Tr.x1-Tr.x3)*(Tr.y2-Tr.y3)-(Tr.x2-Tr.x3)*(Tr.y1-Tr.y3));
}

struct card_reader { // ��������� ��� �������� ����
    unsigned int On: 1; //unsigned int - ������������� ����� �����
    unsigned int CF_a: 1; //���� ��� --> ��������� ������ 2 ��������
    unsigned int SD_a: 1;
    unsigned int MS_a: 1;
};

union CR_U { //������� �����������
    unsigned u; //����������-����������� ���������
    struct card_reader card_reader;
};

int main()
{
    enum forms_of_enterprises { //������� ������������� ���
        ZAO,
        OOO,
        IP
    };

    printf("OOO: %d \n", OOO); // ������� ��� �� �������������� ����

    struct triangle Tr = {2, -3, 1 , 1, -6, 5}; //������� �������� ��� ������� ������������
    printf("Area: %f \n", area(Tr));

    union CR_U CR_State; //������� ���������� �����������

    printf("Insert: ");
    scanf("%x", &CR_State.u); //������ ����� � 16 ��

    printf("Condition: %d\n", CR_State.card_reader.On);
    printf("Condition: %d\n", CR_State.card_reader.CF_a);
    printf("Condition: %d\n", CR_State.card_reader.SD_a);
    printf("Condition: %d\n", CR_State.card_reader.MS_a);
}
