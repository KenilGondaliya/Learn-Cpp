#include <iostream>

using  namespace std;

int main(){
    
    float teaPrice = 49.99;
    int roundedPrice = (int) teaPrice; //rounded value
    int teaQuantity = 5;
    double totalPrice = teaPrice * teaQuantity;

    // output expected is 49

    cout << "Rounded Price: " << roundedPrice << endl;



    return 0;
}