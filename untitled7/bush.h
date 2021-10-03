//
// Created by Даниил Пасилецкий on 23.09.2021.
//

#ifndef UNTITLED7_BUSH_H
#define UNTITLED7_BUSH_H
#include "string.h"
# include "rnd.h"
#include <fstream>

using namespace std;

struct bush {
    enum Monthes{
        January, February, March, April, May, June, July, August, September, October, November, December
    };
    Monthes month;
    std::string name;
};

// Ввод параметров кустарника из файла
void In(bush &b, ifstream &ifst);


// Случайный ввод параметров кустарника
void InRnd(bush &b);

// Вывод параметров кустарника в форматируемый поток
void Out(bush &b, ofstream &ofst);


// Вычисление частного от деления числа гласных букв в названии на общую длину названия (действительное число)
double Quotient(bush &b);


#endif //UNTITLED7_BUSH_H
