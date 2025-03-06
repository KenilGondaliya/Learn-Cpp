#include <iostream>

using namespace std;

int checkTemperature(int temprature)
{
    return temprature;
}

// declaration of function
void serveChai(int cups);

void makeChai()
{
    cout << "Boiling, water, adding tea leaves straining... ";
}

void serveChai(string teaType = "Masala Tea"){
    cout << "Servi ng " << teaType << endl;
}

int main()
{
    int temp = checkTemperature(50);
    //cout << temp << endl;
    //makeChai(); // calling a function
    // serveChai(3);
    serveChai("Lemon Tea");

    return 0;
}

// defination
void serveChai(int cups)
{
    cout << "Serving " << cups << endl;
}