#include <iostream>
#include <climits>
using namespace std;

void wavePrint(int arr[][4], int row, int col)
{

    for (int c = 0; c < col; c++)
    {
        if (c & 1)
        { // bottom to top
            for (int r = row - 1; r >= 0; r--)
            {
                cout << arr[r][c] << " ";
            }
        }
        else
        { // top to bottom
            for (int r = 0; r < row; r++)
            {
                cout << arr[r][c] << " ";
            }
        }
    }
}

int main()
{
    // create a 2d array ➕
    // int arr[3][4];
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    wavePrint(arr, 3, 4);

    return 0;
}