#ifndef FIGURE_H
#define FIGURE_H

//структура моделируемой фигуры
struct figure {
    float x;
    float y;
    float r;
};

float square(struct figure*); //функция принимающая в параметр структуру
float line(struct figure*);

#endif
