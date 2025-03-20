#include <iostream>
#include <climits>
using namespace std;

void rowSum(int arr[][4], int row, int col)
{

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;

        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }

        cout << sum << " " << endl;
    }
}

int largestRowSum(int arr[][4], int row, int col)
{
    int maxi = INT_MIN;
    int rowIndex = -1;

    for (int row = 0; row < 3; row++)
    {
        int sum = 0;

        for (int col = 0; col < 4; col++)
        {
            sum += arr[row][col];
        }

        cout << sum << " " << endl;
        if (sum > maxi)
        {
            maxi = sum;
            rowIndex = row;
        }
    }

    cout << "the maximum sum is " << maxi << endl;
    return rowIndex;
}

int main()
{
    // create a 2d array ➕
    // int arr[3][4];
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    // output 📤
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 4; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    cout << largestRowSum(arr, 3, 4);

    return 0;
}