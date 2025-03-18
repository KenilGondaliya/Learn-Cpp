#include <iostream>
using namespace std;

void displayArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

void insertionShort(int arr[], int n)
{

    int start = 1;
    int end = n;

    while (start < end)
    {
        int temp = arr[start];

        cout << temp << endl;

        int j = start - 1;

        while (j >= 0)
        {

            cout << j << endl;
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j] = temp;
    }

    displayArr(arr, n);
}

int main()
{
    int arr[5] = {8, 4, 2, 9, 5};

    insertionShort(arr, 5);

    return 0;
}