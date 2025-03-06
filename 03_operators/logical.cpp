#include <iostream>

using namespace std;

int main()
{

    int cups;
    bool isStudent;

    cout << "Are you Student (1 for yes and 0 for No) ?";
    cin >> isStudent;

    cout << "How Many Cups of tea have you perchased ?";
    cin >> cups;

    if (isStudent && cups >= 2)
    {
        cout << "You alligible for discount" << endl;
    }
    else
    {
        cout << "You are not alligible for discount" << endl;
    }

    return 0;
}