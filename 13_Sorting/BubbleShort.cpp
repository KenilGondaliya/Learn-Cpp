#include <iostream>

using namespace std;

void displayArr(int arr[], int n)
{

    for (int i = 0; i < n ; i++)
    {
        cout << arr[i] << endl;
    }
}

void bubbleShort(int arr[], int n)
{

    for (int i = 1; i < n; i++)// s= 3
    {
        bool swapped = false;

        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;
        
    }

    displayArr(arr, n);
}

int main()
{
    int arr[5] = {10, 3, 2, 5, 4};

    bubbleShort(arr, 5);

    return 0;
}

// [10,3,2,5,4]

// round 1 i =1 
// [3,10,2,5,4] // j = 0;
// [3,2,10,5,4] // j = 1;
// [3,2,5,10,4] // j = 3;
// [3,2,5,4,10] // j = 4;

// round 2 i =2
// [3,2,5,4,10] // j= 0; // ignore
// [3,2,5,4,10] // j= 1;// ignore
// [3,2,5,4,10] // j= 2; 
// [3,2,4,5,10] // j= 3; // swap
// [3,2,4,5,10] // j= 4 ;// ignore

// round 3 i = 3


