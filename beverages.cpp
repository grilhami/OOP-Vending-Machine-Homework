#include <iostream>
#include <string>
#include "beverages.h"

void SunsetPapua::printDescription() {
    cout << "Quantity in Stock: " << *ptrStock << endl;
    cout << "Price: " << price << endl;
    cout << description << endl;
}

void Sopi::printDescription() {
    cout << "Quantity in Stock: " << *ptrStock << endl;
    cout << "Price: " << price << endl;
    cout << description << endl;
}

void Bajigur::printDescription() {
    cout << "Quantity in Stock: " << *ptrStock << endl;
    cout << "Price: " << price << endl;
    cout << description << endl;
}

void WedangRonde::printDescription() {
    cout << "Quantity in Stock: " << *ptrStock << endl;
    cout << "Price: " << price << endl;
    cout << description << endl;
}