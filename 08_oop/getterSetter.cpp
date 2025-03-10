#include <iostream>
#include <vector>

using namespace std;

class Chai
{
private:
    string teaName;
    int serving;
    vector<string> ingredients;

public:
    Chai()
    {
        teaName = "Unknown tea";
        serving = 1;
        ingredients = {"Water", "tea Leaves"};
    }

    Chai(string name, int serve, vector<string> ingr)
    {
        teaName = name;
        serving = serve;
        ingredients = ingr;
    }

    // getter
    string getTeaName()
    {
        return teaName;
    }

    // setter
    void setTeaName(string name)
    {
        // logic
        teaName = name;
    }

    // getter for serving
    int getServing()
    {
        return serving;
    }

    // setter for serving
    void setServing(int serve)
    {
        serving = serve;
    }

    // getter for ingre
    vector<string> getIngredients()
    {
        return ingredients;
    }

    // setter for ingre
    void setIngredients(vector<string> ingr)
    {
        ingredients = ingr;
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
    Chai chai;
    chai.setTeaName("Ginger Tea");
}
