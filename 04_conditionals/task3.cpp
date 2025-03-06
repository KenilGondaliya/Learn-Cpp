#include <iostream>

using namespace std;

int main()
{

    int cups;
    double pricePerCups = 2.5, totalPrice, discount;

    cout << "Order Tea: " << endl;
    cin >> cups;

    if (cups > 20)
    {
        discount = 0.20;
    }

    if (cups >= 10 && cups <= 20)
    {
        discount = 0.10;
    }
    else
    {
        discount = 0;
    }

    totalPrice = cups * pricePerCups;
    totalPrice -= (totalPrice * discount);

    cout << "Total Price: " << totalPrice << endl;

    return 0;
}