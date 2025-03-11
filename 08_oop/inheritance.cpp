#include <iostream>
#include <string>
#include <vector>

using namespace std;

// base/Main/parent class
class Tea
{
protected:
    string teaName;
    int serving;

public:
    Tea(string name, int serve) : teaName(name), serving(serve)
    {
        cout << "Tea constructor Called" << teaName << endl;
    }

    virtual void brew() const
    {
        cout << "Brewing " << teaName << "with generic method" << endl;
    }

    virtual void serve() const
    {
        cout << "Serving " << serving << "cups of tea with generic method" << endl;
    }

    virtual ~Tea()
    {
        cout << "Tea destructor called for " << teaName << endl;
    }
};

class GreenTea : public Tea
{
public:
    GreenTea(int serve) : Tea("Green Tea", serve)
    {
        cout << "Green tea constructor called" << endl;
    }

    void brew() const override
    {
        cout << "Brewing " << teaName << " by steeping green tea leaves" << endl;
    }

    ~GreenTea()
    {
        cout << "Green tea contructor called";
    }
};

class MasalaTea : public Tea
{
public:
    MasalaTea(int serve) : Tea("Masala Tea", serve)
    {
        cout << "MasalaTea contructor called" << endl;
    }

    void brew() const override final
    {
        cout << "Brewing " << teaName << " with spices and milk " << endl;
    }

    ~MasalaTea()
    {
        cout << "Masala Tea desctructor Called" << endl;
    }
};

// class SpicyMasalaTea : public MasalaTea
// {
// public:
//     void brew() const override
//     {

//         cout << "Brewing " << teaName << " with spices and milk " << endl;
//     }
// };

int main()
{
    Tea *tea1 = new GreenTea(2);
    Tea *tea2 = new MasalaTea(3);

    tea1->brew();
    tea1->serve();

    tea2->brew();
    tea2->serve();

    delete tea1;
    delete tea2;

    return 0;
}