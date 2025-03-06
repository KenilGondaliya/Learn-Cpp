#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Chai
{
    // data members (attributes)
public:
    string teaName;
    int serving;
    vector<string> ingredients; // list of ingredients of the tea

    // Member Function

    void displayDetails()
    {
        cout << "teaName: " << teaName << endl;
        cout << "Serving: " << serving << endl;
        cout << "Ingredients: ";
        for (string ingredient : ingredients)
        {
            cout << ingredient << " ";
        }

        cout << endl;
    }
};

int main()
{
    Chai chaiOne;

    chaiOne.teaName = "lemon tea";
    chaiOne.serving = 2;
    chaiOne.ingredients = {"Water", "Lemon", "Suger", "tea"};
    chaiOne.displayDetails();

    Chai chaiTwo;

    chaiTwo.teaName = "Masala Chai";
    chaiTwo.serving = 2;
    chaiTwo.ingredients = {"Water", "Milk", "tea", "Ginger", "Masala"};
    chaiTwo.displayDetails();
    return 0;
}