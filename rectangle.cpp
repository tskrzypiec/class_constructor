//
// Created by Tomasz on 16.01.2018.
//

#include <iostream>
#include "rectangle.h"

using namespace std;

void Rectangle::load() {

    cout << "Podaj wymiary boku 1" << endl;
    cin >> side_1;
    cout << "Podaj wymiatry boku 2" << endl;
    cin >> side_2;

}

void Rectangle::calculate() {

    perimeter = side_1 * side_2;

    cout <<endl<< "Obwód prostokąta wynosi " << perimeter << endl;

}

Rectangle::Rectangle(int a, int b) {

    side_1=a;
    side_2=b;

}

Rectangle::~Rectangle() {

   // cout<<"Destruktor :)"<<endl;
}