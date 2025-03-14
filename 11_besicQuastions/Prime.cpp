#include <iostream>

using namespace std;

int main()
{
    int n = 6;
    bool isPrime = 1;
   

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            isPrime = 0;
            break;
        }
    }

    cout << isPrime << endl;


    if (isPrime == 0)
    {
        cout << "is Not A Prime Num";
    }else{
        cout << "is A Prime Num";
    }
    
    

    return 0;
}