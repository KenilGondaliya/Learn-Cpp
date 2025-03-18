#include <iostream>
using namespace std;

void displayArr(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

void selectionShot(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i; // 10

        for (int j = i + 1; j < n; j++) // 3 to 4
        {
            if (arr[j] < arr[minIndex]) // 3 < 10
            {
                minIndex = j; // minIndex = 3
            }
        }

        swap(arr[minIndex], arr[i]); // swap 3 , 10
    }

    displayArr(arr, n);
}

int main()
{
    int arr[5] = {10, 3, 2, 5, 4};

    selectionShot(arr, 5);
    return 0;
}

// [10,3,2,5,4]

// step 1

// 3 10 2 5 4