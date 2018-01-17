//
// Created by Tomasz on 16.01.2018.
//

//#ifndef PROSTOKAT_PROSTOKAT_H
//#define PROSTOKAT_PROSTOKAT_H

//#endif //PROSTOKAT_PROSTOKAT_H

#include <iostream>

using namespace std;

class Rectangle {

    int side_1;
    int side_2;
    int perimeter;

public:

    Rectangle(const Rectangle &kopiaRectangle);

    Rectangle(int,int); // na sztywno tu mozna przypisac int = np. 2

    ~Rectangle();

    void load(); // wczytuje dane boków
    void calculate();
};
