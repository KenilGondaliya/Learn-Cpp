#include <iostream>

using namespace std;

int main()
{
    int i = 1;
    int n = 4;
    int count = 1; // formula 4

    while (i <= n)
    {
        int space = n - i;

        while (space)
        {
            cout << " ";
            space--;
        }

        int j = 1;
    
        while (j<=i)
        {
            // cout << j; //formula 3
            // cout << i; // formula 1
            // cout << count; // formula 4
            // count++;
            j++;
        }

        cout << endl;
        i++;
        
    }

    return 0;
}


//formula 1
//    1
//   22
//  333
// 4444

//formula 2
//     1
//    23
//   456
// 78910

//formula 3
//     1
//    12
//   123
//  1234

// forumula 4
//    1
//   23
//  456
// 78910