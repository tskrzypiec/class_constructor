//
// Created by Tomasz on 16.01.2018.
//

#include <iostream>
#include "rectangle.h"

using namespace std;

void Rectangle::load() {

    cout << "Podaj wymiary boku 1" << endl;
    cin >> side_1;
    cout << "Podaj wymiary boku 2" << endl;
    cin >> side_2;

}

void Rectangle::calculate() {

    perimeter = side_1 * side_2;

    cout <<endl<< "Obwód prostokąta wynosi " << perimeter << endl;

}

/*Rectangle::Rectangle(int side_1, int side_2) : side_1(side_1),side_2(side_2) // lista inicjalizacyjna stosujemy, kiedy argumenty maja
                                                                            // taka sama nazwa jak pola obiektów
{

}  */

Rectangle::Rectangle(const Rectangle &kopiaRectangle) {
    side_1 = kopiaRectangle.side_1;
    side_2 = kopiaRectangle.side_2;
    cout << "konstruktor kopiujacy\n";
}

 Rectangle::Rectangle(int side_1, int side_2) // można też tak
 {
    this ->side_1=side_1;
    this->side_2=side_2;
 }


Rectangle::~Rectangle() {

    cout<<"Destruktor :)"<<endl;
}

