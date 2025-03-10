#include <iostream>
#include <vector>

using namespace std;

class Chai
{
public:
    string teaName;
    int serving;
    vector<string> ingredients;

    // deligating contructor

    Chai(string name) : Chai(name, 1, {"Water", "teaLeaves"}) {}

    // main Constructor
    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = name;
        serving = serve;
        ingredients = ingr;

        cout << "Main Constructor Called" << endl;
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
    Chai quickChai("Quick chai");
    quickChai.displayDetails();
}
