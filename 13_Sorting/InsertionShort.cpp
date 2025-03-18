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

    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > temp)
        {
            arr[j + 1] = arr[j]; 
            j--;
        }

        arr[j + 1] = temp; 
    }

    displayArr(arr, n);
}

int main()
{
    int arr[5] = {8, 4, 2, 9, 5};

    insertionShort(arr, 5);

    return 0;
}