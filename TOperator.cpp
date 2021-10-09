//
// Created by Tudor Deviza on 08.10.2021.
//

#include "TOperator.h"
#include "TComanda.h"

TComanda comanda;
TOperator::TOperator() {}

TOperator::TOperator(string nume) {
    this->nume_opeator = nume;
}

void TOperator::setNumeOperator(string nume)  {
    this->nume_opeator = nume;

}

string TOperator::getNumeOperator() {
    return this->nume_opeator;
}

void setComanda(TComanda new_comanda) {
    comanda = new_comanda;
}
list<Item*> b;

void TOperator::afiseazaCommanda() {
    for (auto i: b) {
        std::cout << i->getNameItem() << "  " << i->getPriceItem() << std::endl;
    }
//    for (auto i : listItem) {
//        std::cout << i.getNameItem() << "  " << i.getPriceItem() << std::endl;
//    }
//
//    list<Item>::iterator it;
//    for (it = listItem.begin(); it != listItem.end(); ++it) {
//        std::cout << it->getNameItem() << "  " << it->getPriceItem() << std::endl;
//    }
}
void TOperator::saveNewList(list<Item*> a) {
//    std::cout << a.getNameItem() << "  " << a.getPriceItem() << std::endl;
    b = a;
    this->listItem = a;
}

