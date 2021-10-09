//
// Created by Tudor Deviza on 08.10.2021.
//

#include "Item.h"

Item::Item(string n, int p) {
    this->name_item = n;
    this->price_item = p;
}

void Item::setNameItem(string n) {
    this->name_item = n;
}

void Item::setPriceItem(int p) {
    this->price_item = p;
}

string Item::getNameItem() {
    return this->name_item;
}

int Item::getPriceItem() {
    return this->price_item;
}


