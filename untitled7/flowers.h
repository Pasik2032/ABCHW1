//
// Created by Даниил Пасилецкий on 02.10.2021.
//

#ifndef UNTITLED7_FLOWERS_H
#define UNTITLED7_FLOWERS_H
#include "string.h"
# include "rnd.h"
#include <fstream>

using namespace std;

struct flowers {
    enum Type{
        homemade, garden, wild
    };
    Type type;
    std::string name;
};

// Ввод параметров цветка из файла
void In(flowers &f, ifstream &ifst);


// Случайный ввод параметров цветка
void InRnd(flowers &f);

// Вывод параметров цветка в форматируемый поток
void Out(flowers &f, ofstream &ofst);


// Вычисление частного от деления числа гласных букв в названии на общую длину названия (действительное число)
double Quotient(flowers &f);


#endif //UNTITLED7_FLOWERS_H
