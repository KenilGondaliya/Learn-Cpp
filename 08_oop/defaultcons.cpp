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

    //default constructor
    Chai()
    {
       teaName = "Unknow Tea";
       serving = 1;
       ingredients = {"Water", "Tea leaves"};
       cout << "constructor called" << endl;
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
    Chai defaultChai;

    defaultChai.displayDetails();

    return 0;
}