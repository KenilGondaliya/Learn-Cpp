#include <iostream>

using namespace std;

bool search(int arr[], int size, int key)
{

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return 1;
        }
    }

    return 0;
}

int main()
{
    int arr[10] = {5, 7, -2, 10, 22, -2, 0, 5, 22, 1};
    int size = 10;

    // cout << " Enter the element to search for " << endl;
    int key = 0;
    // cin >> key;

    bool found = search(arr, size, key);

    if (found)
    {
        cout << " Key is Present " << endl;
    }
    else
    {
        cout << " Key is Not Present " << endl;
    }

    return 0;
}