#include <iostream>

using namespace std;

int main()
{
    int cups;
    double pricePerCup, totalPrice, discountedPrice;

    cout << "Enter the number of cups: ";
    cin >> cups;
    cout << "Enter the price per cups: ";
    cin >> pricePerCup;

    totalPrice = cups * pricePerCup;

    // 5% discount if the total price is greater than 100

    if (totalPrice > 100)
    {
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Discounted Price:" << discountedPrice << endl;
    }
    else
    {
        cout << "Total Price:" << totalPrice << endl;
    }

    
    return 0;
}