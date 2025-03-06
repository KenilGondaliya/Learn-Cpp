#include <iostream>
#include <string>
using namespace std;

int main()
{

    string response;

    while (true)
    {
        cout << "Do you want more tea (type stop to exit)? : " << endl;
        cin >> response;

        if (response == "stop" || response == "exit")
        {
            break;
        }

        cout << "Here the onther cup of tea" << endl;
    }

    return 0;
}