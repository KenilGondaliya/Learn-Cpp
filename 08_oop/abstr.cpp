#include <iostream>
#include <vector>

using namespace std;

class Tea
{
public:
    virtual void prepareIngredients() = 0; // pure virtual function
    virtual void brew() = 0;
    virtual void serve() = 0;

    void makeTea()
    {
        prepareIngredients();
        brew();
        serve();
    }
};

class GreenTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Green leaves and water is ready" << endl;
    }
    void brew() override
    {
        cout << "Green Tea brewed" << endl;
    }
    void serve() override
    {
        cout << "Green Tea Served" << endl;
    }
};

class MasalaTea : public Tea
{
public:
    void prepareIngredients() override
    {
        cout << "Masala leaves and water is ready along with Masala" << endl;
    }
    void brew() override
    {
        cout << "Masala Tea brewed" << endl;
    }
    void serve() override
    {
        cout << "Masala Tea Served" << endl;
    }
};

int main()
{
    GreenTea greenTea;
    MasalaTea masalaTea;

    greenTea.makeTea();
    masalaTea.makeTea();
    return 0;
}
