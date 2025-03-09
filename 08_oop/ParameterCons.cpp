#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Chai
{
public:
    string teaName;
    int serving;
    vector<string> ingredients;

    // parameter constructor
    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = name; 
        serving = serve;
        ingredients = ingr;
        cout << "Param Constructor Called" << endl;
    }

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
    Chai lemonTea("Lemon Tea", 2, {"Water", "Lemon", "Honney"});

    lemonTea.displayDetails();

    return 0;
}