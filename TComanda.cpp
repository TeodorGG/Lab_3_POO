//
// Created by Tudor Deviza on 08.10.2021.
//
#include "TComanda.h"
#include "TOperator.h"
#include <utility>

TComanda::TComanda() = default;

TComanda::TComanda(string statu, TOperator oper) {
    this->status = std::move(statu);
    this->oper = oper;

}

string TComanda::getStatus() {
    return this->status;
}

void TComanda::setStatus(string new_status) {
    this->status = std::move(new_status);
}

void TComanda::setTOperator(TOperator new_oper) {
    this->oper = new_oper;
}

TOperator TComanda::getTOperator() {
    return this->oper;
}

TComanda TComanda::operator+=(Item new_item) {
    this->itemList.push_back(&new_item);
    this->oper.saveNewList(this->itemList);
    return *this;
}

list<Item*> TComanda::getList() {
    return this->itemList;
}

