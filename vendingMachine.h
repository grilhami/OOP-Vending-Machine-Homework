#include <iostream>
#include "beverages.h"

using namespace std;

class VendingMachine {
    private:
        int beverageNums[4] = {1, 2, 3 ,4};
        int validCoins[3] = {10, 50, 100};

        int *coin, coinAmount;
        int *choice, currentChoice;

        SunsetPapua sunset;
        Sopi sopi;
        Bajigur bajigur;
        WedangRonde wedang;

        bool validBeveragePick(int input);
        bool validCoinType(int input);
    public:
        VendingMachine();

        void inputCoin();
        void inputBeverage();
        bool amountLargerOrEqualThanCheapest();
        bool beverageInOptions();
        bool beverageInStock();
        bool amountLargerOrEqualThanCurrentChoice();
        bool spareAmountEnough();
        bool buyMore();
        bool chooseToWait();

};