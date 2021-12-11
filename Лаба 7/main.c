#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle { //структура для треугольника с параметрами высоты и основания
    int x1;
    int y1;
    int x2;
    int y2;
    int x3;
    int y3;
};

float area(struct triangle Tr) { //функция для нахождения площади
    return 0,5*((Tr.x1-Tr.x3)*(Tr.y2-Tr.y3)-(Tr.x2-Tr.x3)*(Tr.y1-Tr.y3));
}

struct card_reader { // структура для битового поля
    unsigned int On: 1; //unsigned int - положительное целое число
    unsigned int CF_a: 1; //один бит --> принимает только 2 значения
    unsigned int SD_a: 1;
    unsigned int MS_a: 1;
};

union CR_U { //создаем объединение
    unsigned u; //переменная-считыватель состояния
    struct card_reader card_reader;
};

int main()
{
    enum forms_of_enterprises { //создаем перечисляемый тип
        ZAO,
        OOO,
        IP
    };

    printf("OOO: %d \n", OOO); // выводим ООО из перечисляемого типа

    struct triangle Tr = {2, -3, 1 , 1, -6, 5}; //выводим значения для площади треугольника
    printf("Area: %f \n", area(Tr));

    union CR_U CR_State; //создаем переменную объединения

    printf("Insert: ");
    scanf("%x", &CR_State.u); //вводим число в 16 си

    printf("Condition: %d\n", CR_State.card_reader.On);
    printf("Condition: %d\n", CR_State.card_reader.CF_a);
    printf("Condition: %d\n", CR_State.card_reader.SD_a);
    printf("Condition: %d\n", CR_State.card_reader.MS_a);
}
