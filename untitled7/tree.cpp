//
// Created by Даниил Пасилецкий on 23.09.2021.
//

#include "tree.h"



void In(tree &t, ifstream &ifst) {
    ifst >> t.name >> t.age;
}


// Случайный ввод параметров дерева
void InRnd(tree &t) {
    t.age = Random(20);
    int length = Random(10);
    t.name = "";
    for (int i = 0; i < length; ++i) {
        char a =  Random('z','a');
        t.name += a;
    }
}

void Out(tree &t, ofstream &ofst) {
    ofst << "It is tree: name = " << t.name << ", age = " << t.age <<  ". Quotient = " << Quotient(t)<<"\n";
}


double Quotient(tree &t){
    int count = 0;
    for (int i = 0; i < t.name.length(); ++i) {
        if (t.name[i] != 'e' && t.name[i] != 'y' && t.name[i] != 'u'
            && t.name[i] != 'i' && t.name[i] != 'o' && t.name[i] != 'a') {
            count += 1;
        }
    }
    return (double)count/(double)t.name.length();
}