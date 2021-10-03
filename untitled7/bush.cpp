//
// Created by Даниил Пасилецкий on 23.09.2021.
//

#include "bush.h"


void In(bush &b, ifstream &ifst) {
    int month;
    ifst >> b.name >> month;
    b.month = static_cast<bush::Monthes>(month);
}


// Случайный ввод параметров кусторник
void InRnd(bush &b) {
    b.month = static_cast<bush::Monthes>(Random(12,0));
    int length = Random(10);
    b.name = "";
    for (int i = 0; i < length; ++i) {
        char a =  Random('z','a');
        b.name += a;
    }
}


void Out(bush &b, ofstream &ofst) {
    ofst << "It is bush: name = " << b.name << ", Number month of flowering = "
    << b.month <<  ". Quotient = " << Quotient(b)<< "\n";
}

// Вычисление частного от деления числа гласных букв в названии на общую длину названия (действительное число)
double Quotient(bush &b){
    int count = 0;
    for (int i = 0; i < b.name.length(); ++i) {
        if (b.name[i] != 'e' && b.name[i] != 'y' && b.name[i] != 'u'
            && b.name[i] != 'i' && b.name[i] != 'o' && b.name[i] != 'a') {
            count += 1;
        }
    }
    return (double)count/(double)b.name.length();
}