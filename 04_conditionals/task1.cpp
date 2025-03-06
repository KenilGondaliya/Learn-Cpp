#include <iostream>
#include <string>
using namespace std;

int main()
{

    string teaOrder;

    cout << "What would you like to order (Tea/Coffee) ?";
    cin >> teaOrder;

    if (teaOrder == "Green Tea")
    {
        cout << "Order Confirmed" << endl;
    }

    return 0;
}