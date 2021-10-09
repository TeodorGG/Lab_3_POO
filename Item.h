//
// Created by Tudor Deviza on 08.10.2021.
//

#ifndef UNTITLED4_ITEM_H
#define UNTITLED4_ITEM_H
#include <string>


using namespace std;

class Item {

private:
    string name_item;
    int price_item;
public:
    Item(string n, int p);
    void setNameItem(string n);
    void setPriceItem(int p);
    string getNameItem();
    int getPriceItem();

};


#endif //UNTITLED4_ITEM_H
