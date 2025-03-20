#include <iostream>

using namespace std;

bool isPresent(int arr[][4], int target, int row, int col)
{

    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
        }
    }

    return 0;
}

int main()
{
    // create a 2d array ➕
    // int arr[3][4];
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    // taking input 📥
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cin >> arr[i][j];
    //     }
    // }

    int target = 4;

    // output 📤
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    if (isPresent(arr, target, 3, 4))
    {
        cout << "Element Found ✅";
    }
    else
    {
        cout << "Element Not Found ❌";
    }

    return 0;
}