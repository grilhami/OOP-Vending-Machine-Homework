#include <iostream>
#include <string>

using namespace std;

class Beverage {};

class SunsetPapua: public Beverage {
    private:
        int stock = 5;

    public:
        int *ptrStock = &stock;
        int price = 60;
        string description = "The name of this unique drink is a"
        " blend of orange juice at the bottom and carrot juice at"
        " the top. The result, the juice of these two fruits produces"
        " a distinctive color like a sunset.";
        void printDescription();
};

class Sopi: public Beverage {
    private:
        int stock = 5;

    public:
        int *ptrStock = &stock;
        int price = 80;
        string description = "One of the traditional types of alcoholic"
        " drinks, from East Nusa Tenggara, which is the result of"
        " fermentation of sap or liquid sugar from several types of palm"
        " including palm leaves, gewang, palm and coconut.";

        void printDescription();
};

class Bajigur: public Beverage {
    private:
        int stock = 5;
        

    public:
        int *ptrStock = &stock;
        int price = 30;
        string description = "A traditional hot beverage native to the"
        " Sundanese people of West Java, Indonesia. The drink is made"
        " from coconut milk, Aren sugar, ginger, a little salt, and"
        " sometimes pandan leaves or coffee.";
        void printDescription();
};

class WedangRonde: public Beverage {
    private:
        int stock = 5;
        

    public:
        int *ptrStock = &stock;
        int price = 40;
        string description = "A traditional hot dessert suitable for"
        " cold nights or rainy days. It contains peanut-filled glutinous"
        " rice balls soaked inside ginger and lemongrass juices mixed"
        " with sugar.";
        void printDescription();
};