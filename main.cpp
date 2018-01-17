#include <iostream>
#include "rectangle.h"

using namespace std;

int main() {


    Rectangle p1(3,3);

    p1.load();
    p1.calculate();


    Rectangle *p2 = new Rectangle(2,5); // dynamicznie przydzielony konstruktor pusty() wiec wezmie 2 i 2
    //p1.load();


    p2->calculate();


    Rectangle *p3 = new Rectangle(5,5);  // dobrze

    p3->calculate();

    Rectangle p4 (*p2);  // kopiowanie obiektu p1

    p4.calculate();

    return 0;
}