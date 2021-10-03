//
// Created by Даниил Пасилецкий on 02.10.2021.
//

#ifndef UNTITLED7_CONTAINER_H
#define UNTITLED7_CONTAINER_H

#include "plants.h"
const int max_len = 10001;  // максимальная длина
struct container {
    int len; // текущая длина
    plants *cont[max_len];
};

// Инициализация контейнера
void Init(container &c);

// Очистка контейнера от элементов (освобождение памяти)
void Clear(container &c);

// Ввод содержимого контейнера из указанного потока
void In(container &c, ifstream &ifst);

// Случайный ввод содержимого контейнера
void InRnd(container &c, int size);

// Вывод содержимого контейнера в указанный поток
void Out(container &c, ofstream &ofst);

// Вычисление суммы
void QuotientSort(container &c);

#endif //UNTITLED7_CONTAINER_H
