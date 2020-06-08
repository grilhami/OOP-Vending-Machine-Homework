#include <iostream>
#include <algorithm>
#include <iterator> 
#include "vendingMachine.h"

using namespace std;

VendingMachine::VendingMachine(): 
    coinAmount(0), 
    currentChoice(0), 
    coin(&coinAmount), 
    choice(&currentChoice) 
    {}

void VendingMachine::inputCoin() {

    int insertedCoin;
    bool validCoin;

    cout << "Insert Coin (10, 50, 100 only): ";
    cin >> insertedCoin;

    validCoin = validCoinType(insertedCoin);

    while(!validCoin) {
        cout << "Please insert only 10, 50, or 100 coin: ";
        cin >> insertedCoin;

        validCoin = validCoinType(insertedCoin);
    }

    *coin += insertedCoin;
}
void VendingMachine::inputBeverage() {

    int insertedNum;
    bool validBeverage;

    cout << "Insert Beverage Number (1, 2, 3, 4): ";
    cin >> insertedNum;

    validBeverage = validBeveragePick(insertedNum);

    while(!validBeverage) {
        cout << "We do not provide such beverage. Please choose either 1, 2, 3, or 4:";
        cin >> insertedNum;

        validBeverage = validBeveragePick(insertedNum);
    }

    *choice = insertedNum;
}

bool VendingMachine::validBeveragePick(int input) {

    int *validate = find(begin(beverageNums), end(beverageNums), input);

    if ( validate != end(beverageNums)) {
        return true;

    } else {
        return false;
    }

}

bool VendingMachine::validCoinType(int input) {

    int *validate = find(begin(validCoins), end(validCoins), input);

    if ( validate != end(validCoins)) {
        return true;
    } else {
        return false;
    }

}