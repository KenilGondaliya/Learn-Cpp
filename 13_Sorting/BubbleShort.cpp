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

    for (int i = 1; i < n; i++)
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