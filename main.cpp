#include <iostream>
#include <vector>
#include <string>

using namespace std;


class BaseBeverage {
    private:
        int stock;
        int price;
        string description;
    public:
        BaseBeverage(): stock(0), price(0), description("Your favorie beverage.") {}

        void printDescription() {
            cout << description << endl;
        }
    
};

int main() {
    BaseBeverage beverage;

    beverage.printDescription();

    return 0;
}