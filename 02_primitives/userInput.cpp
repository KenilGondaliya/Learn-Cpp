#include <iostream>
#include <string>
using  namespace std;

int main(){
    string userTea;
    int userQuantity;

    cout << "What would you like to order?\n";
    getline(cin, userTea);

    // ask for quantity

    cout << "how many cups of" << userTea << "would you like to have?\n";
    cin >> userQuantity;    

    cout << "user Quantity: " << userQuantity << endl;
    cout << "user Tea: " << userTea << endl;

    return 0;
}