#include <iostream>

using namespace std;

class VendingMachine {
    private:
        int beverageNums[4] = {1, 2, 3 ,4};
        int *coin, coinAmount;
        int *choice, currentChoice;
    public:
        VendingMachine(int coin_in, int num_beverage);

        void inputCoin();
        void inputBeverage();
        void checkCoinAndChoice();
        bool correctCoinType();
        bool amountLargerOrEqualThanCheapest();
        bool beverageInOptions();
        bool beverageInStock();
        bool amountLargerOrEqualThanCurrentChoice();
        bool spareAmountEnough();
        bool buyMore();
        bool chooseToWait();

};