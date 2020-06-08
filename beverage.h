#include <iostream>
#include <string>

using namespace std;

class BaseBeverage {
    private:
        int stock;
        int price;
        string description;
    public:
        BaseBeverage();

        void printDescription();
    
};