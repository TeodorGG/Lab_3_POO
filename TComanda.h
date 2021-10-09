//
// Created by Tudor Deviza on 08.10.2021.
//

#ifndef UNTITLED4_TCOMANDA_H
#define UNTITLED4_TCOMANDA_H
#include <string>
#include <list>
#include "TOperator.h"
#include "Item.h"


using namespace std;

class TComanda {
private:
    TOperator oper;
    list<Item*> itemList;
    string status;

public:
    TComanda();
    TComanda(string, TOperator);
    string getStatus();
    void setStatus(string new_status);
    void setTOperator(TOperator new_oper);
    TOperator getTOperator();
    list<Item*> getList();

    TComanda operator+=(Item new_item);

};


#endif //UNTITLED4_TCOMANDA_H
