#ifndef FIGURE_H
#define FIGURE_H

//��������� ������������ ������
struct figure {
    float x;
    float y;
    float r;
};

float square(struct figure*); //������� ����������� � �������� ���������
float line(struct figure*);

#endif
