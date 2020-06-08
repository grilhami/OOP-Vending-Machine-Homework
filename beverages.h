#include <iostream>
#include <string>

using namespace std;

class SunsetPapua {
    private:
        int stock = 5;
        int price = 60;
        string description = "The name of this unique drink is a"
        " blend of orange juice at the bottom and carrot juice at"
        " the top. The result, the juice of these two fruits produces"
        " a distinctive color like a sunset.";

    public:
        void printDescription();
};

class Sopi {
    private:
        int stock = 5;
        int price = 80;
        string description = "One of the traditional types of alcoholic"
        " drinks, from East Nusa Tenggara, which is the result of"
        " fermentation of sap or liquid sugar from several types of palm"
        " including palm leaves, gewang, palm and coconut.";

    public:
        void printDescription();
};