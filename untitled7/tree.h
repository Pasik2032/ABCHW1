//
// Created by Даниил Пасилецкий on 23.09.2021.
//

#ifndef UNTITLED7_TREE_H
#define UNTITLED7_TREE_H

#include <fstream>
#include "string.h"
# include "rnd.h"
using namespace std;

struct tree {
    long int age;
    string name;
};

// Ввод параметров дерева из файла
void In(tree &t, ifstream &ifst);


// Случайный ввод параметров дерева
void InRnd(tree &е);

// Вывод параметров дерева в форматируемый поток
void Out(tree &t, ofstream &ofst);


// Вычисление частного от деления числа гласных букв в названии на общую длину названия (действительное число)
double Quotient(tree &t);


#endif //UNTITLED7_TREE_H
