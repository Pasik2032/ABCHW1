//
// Created by Даниил Пасилецкий on 02.10.2021.
//

#include "flowers.h"



void In(flowers &f, ifstream &ifst) {
    int type;
    ifst >> f.name >> type;
    f.type = static_cast<flowers::Type>(type);
}


// Случайный ввод параметров цветка
void InRnd(flowers &f) {
    f.type = static_cast<flowers::Type>(Random(2,0));
    int length = Random(10);
    f.name = "";
    for (int i = 0; i < length; ++i) {
        char a =  Random('z','a');
        f.name += a;
    }
}

string printColor(flowers::Type type) {
    if (type == flowers::homemade)
        return "homemade";
    else if (type == flowers::garden)
        return "garden";
    else if (type == flowers::wild)
        return "wild";
    else
        return "EROR";
}

void Out(flowers &f, ofstream &ofst) {
    ofst << "It is flowers: name = " << f.name << ", type of = " << printColor(f.type) <<  ". Quotient = " << Quotient(f)<< "\n";
}

// Вычисление частного от деления числа гласных букв в названии на общую длину названия (действительное число)
double Quotient(flowers &f){
    int count = 0;
    for (int i = 0; i < f.name.length(); ++i) {
        if (f.name[i] != 'e' && f.name[i] != 'y' && f.name[i] != 'u'
            && f.name[i] != 'i' && f.name[i] != 'o' && f.name[i] != 'a') {
            count += 1;
        }
    }
    return (double)count/(double)f.name.length();
}