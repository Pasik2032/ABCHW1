//
// Created by Даниил Пасилецкий on 02.10.2021.
//

#ifndef UNTITLED7_PLANTS_H
#define UNTITLED7_PLANTS_H


#include "tree.h"
#include "bush.h"
#include "flowers.h"

//Структура обобщения
struct plants {
// значения ключей для каждого из растений
    enum key {TREE, BUSH, FLOWERS};
    key k; // ключ
    // используемые альтернативы
    tree t;
    bush b;
    flowers f;
//    union { // используем простейшую реализацию
//        tree t;
//        bush b;
//        flowers f;
//    };
};

// Ввод параметров из файла
plants *In(ifstream &ifst);


// Случайный ввод параметров
plants *InRnd();

// Вывод параметров в форматируемый поток
void Out(plants &p, ofstream &ofst);


// Вычисление частного от деления числа гласных букв в названии на общую длину названия (действительное число)
double Quotient(plants &p);


#endif  //UNTITLED7_PLANTS_H
