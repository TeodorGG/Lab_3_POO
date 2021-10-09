#include <iostream>
#include <string>
#include "TOperator.h"
#include "TComanda.h"
#include "Item.h"


#include <string>

using namespace std;

int main()
{
    TOperator oper("Alexandru");
    TComanda command("online", oper);

    command +=  Item("usb stick", 220);
    command +=  Item("tastatura", 175);
    command +=  Item("mouse",     350);

    oper.afiseazaCommanda();

    return 0;
}