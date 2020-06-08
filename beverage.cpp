#include <iostream>
#include <string>
#include "beverage.h"

using namespace std;


BaseBeverage::BaseBeverage(): stock(0), price(0), description("Your favorie beverage.") {}
void BaseBeverage::printDescription() {
    cout << description << endl;  
}