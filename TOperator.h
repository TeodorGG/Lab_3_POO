//
// Created by Tudor Deviza on 08.10.2021.
//

#ifndef UNTITLED4_TOPERATOR_H
#define UNTITLED4_TOPERATOR_H
#include <string>
#include <list>
#include <iostream>
#include "Item.h"

using namespace std;
class TOperator {

private:
    string nume_opeator;
    list<Item*> listItem;
public:
    TOperator();
    TOperator(string nume);
    void setNumeOperator(string nume);
    string getNumeOperator();
    void afiseazaCommanda();
    void saveNewList(list<Item*>);
};


#endif //UNTITLED4_TOPERATOR_H
