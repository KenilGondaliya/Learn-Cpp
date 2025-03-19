#include <iostream>
#include <vector>

using namespace std;

void displayArr(vector<int> arr, int m)
{

    for (int i = 0; i <= arr.size(); i++)
    {
        cout << arr[i] << endl;
    }

    cout << endl;
}

int reverseToSpecificPosition(vector<int> arr, int m)
{

    int start = m + 1;
    int end = arr.size() - 1;

    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    displayArr(arr, m);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int m = 2;

    reverseToSpecificPosition(arr, m);

    return 0;
}