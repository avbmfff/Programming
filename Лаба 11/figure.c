#include <stdio.h>
#include "figure.h"
#include <math.h>

float square(struct figure* circle) { //функция для площади
    //передавать указатель на структуру
    float R = pow(circle->r, 2);
    return 3.14*R;
}

float line(struct figure* circle) { //функция для длины окружности
    float R = circle->r;
    return sqrt(R)*2*3.14;
}

