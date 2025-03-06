#include <iostream>

using namespace std;

int main()
{

    int choice;
    double price;

    cout << "Select the Tea: \n";
    cout << "1. Green Tea\n";
    cout << "2. Lemon Tea\n";
    cout << "3. Oolong Tea\n";
    cout << "4. Black Tea\n";
    cout << "Enter Your Choice(number): \n";
    cin >> choice;

    switch (choice)
    {
    case 1:
        price = 2;
        cout << "Green Tea Selected Price: " << price << endl;
        break;
    case 2:
        price = 5;
        cout << "Lemon Tea Selected Price: " << price << endl;
        break;
    case 3:
        price = 3;
        cout << "Oolong Tea Selected Price: " << price << endl;
        break;
    case 4:
        price = 4;
        cout << "Black Tea Selected Price: " << price << endl;
        break;
    default:
        cout << "Invalid Choice" << endl << endl;
        return 0;
    }

    return 0;
}