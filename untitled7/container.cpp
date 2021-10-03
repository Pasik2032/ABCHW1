//
// Created by Даниил Пасилецкий on 02.10.2021.
//

#include "container.h"
// Инициализация контейнера
void Init(container &c) {
    c.len = 0;
}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void Clear(container &c) {
    for(int i = 0; i < c.len; i++) {
        delete c.cont[i];
    }
    c.len = 0;
}

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void In(container &c, ifstream &ifst) {
    while(!ifst.eof()) {
        if((c.cont[c.len] = In(ifst)) != 0) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Случайный ввод содержимого контейнера
void InRnd(container &c, int size) {
    while(c.len < size) {
        if((c.cont[c.len] = InRnd()) != nullptr) {
            c.len++;
        }
    }
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void Out(container &c, ofstream &ofst) {
    ofst << "Container contains " << c.len << " elements." << endl;
    for(int i = 0; i < c.len; i++) {
        ofst << i << ": ";
        Out(*(c.cont[i]), ofst);
    }
}

//------------------------------------------------------------------------------
// Вычисление суммы разности всех имен в контейнере
void QuotientSort(container &c) {
    int control = c.len - 1;
    int left  = 0;
    int right = c.len - 1;
    do {
        for (int i = left; i < right; i++) {
            if (Quotient(*(c.cont[i])) > Quotient(*(c.cont[i+1]))) {
                std::swap(c.cont[i], c.cont[i + 1]);
                control = i;
            }
        }
        right = control;
        for (int i = right; i > left; i--) {
            if (Quotient(*(c.cont[i])) < Quotient(*(c.cont[i-1]))) {
                std::swap(c.cont[i], c.cont[i - 1]);
                control = i;
            }
        }
        left = control;
    } while (left < right);

}
