#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Chai
{
public:
    string *teaName;
    int serving;
    vector<string> ingredients;

    // parameter constructor
    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = new string(name);
        serving = serve;
        ingredients = ingr;
        cout << "Param Constructor Called" << endl;
    }

    // copy constructor
    Chai(const Chai &other)
    {
        teaName = new string(*other.teaName);
        serving = other.serving;
        ingredients = other.ingredients;
        cout << "Copy Constructor Called" << endl;
    }

    ~Chai()
    {
        delete teaName;
        cout << "Destructor Called" << endl;
    }

    void displayDetails()
    {
        cout << "teaName: " << *teaName << endl;
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

    // lemonTea.displayDetails();

    // copy the object
    Chai copiedChai = lemonTea;
    // copiedChai.displayDetails();

    *lemonTea.teaName = "Modified Lemon tea";

    cout << "Lemon Tea ----------" << endl;
    lemonTea.displayDetails();
    cout << "Copied Tea -----------" << endl;
    copiedChai.displayDetails();

    return 0;
}