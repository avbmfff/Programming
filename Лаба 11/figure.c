#include <stdio.h>
#include "figure.h"
#include <math.h>

float square(struct figure* circle) { //������� ��� �������
    //���������� ��������� �� ���������
    float R = pow(circle->r, 2);
    return 3.14*R;
}

float line(struct figure* circle) { //������� ��� ����� ����������
    float R = circle->r;
    return sqrt(R)*2*3.14;
}

