//
// Created by Даниил Пасилецкий on 02.10.2021.
//

#include "plants.h"
#include "rnd.h"

// Ввод параметров растения из файла
plants* In(ifstream &ifst) {
    plants *plant;
    int k;
    ifst >> k;
    switch(k) {
        case 1:
            plant = new plants;
            plant->k = plants::TREE;
            In(plant->t, ifst);
            return plant;
        case 2:
            plant = new plants;
            plant->k = plants::BUSH;
            In(plant->b, ifst);
            return plant;
        case 3:
            plant = new plants;
            plant->k = plants::FLOWERS;
            In(plant->f, ifst);
            return plant;
        default:
            return 0;
    }
}

plants *InRnd() {
    plants* plant;
    auto k = rand() % 3 + 1;
    switch(k) {
        case 1:
            plant = new plants;
            plant->k = plants::TREE;
            InRnd(plant->t);
            return plant;
        case 2:
            plant = new plants;
            plant->k = plants::BUSH;
            InRnd(plant->b);
            return plant;
        case 3:
            plant = new plants;
            plant->k = plants::FLOWERS;
            InRnd(plant->f);
            return plant;
        default:
            return 0;
    }
}

void Out(plants &p, ofstream &ofst) {
    switch(p.k) {
        case plants::TREE:
            Out(p.t, ofst);
            break;
        case plants::BUSH:
            Out(p.b, ofst);
            break;
        case plants::FLOWERS:
            Out(p.f, ofst);
            break;
        default:
            ofst << "Incorrect plants!" << endl;
    }
}

double Quotient(plants &p){
    switch(p.k) {
        case plants::TREE:
            return Quotient(p.t);
            break;
        case plants::BUSH:
            return Quotient(p.b);
            break;
        case plants::FLOWERS:
            return Quotient(p.f);
            break;
        default:
            return 0.0;
    }
}

