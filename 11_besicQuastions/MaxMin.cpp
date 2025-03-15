#include <iostream>
#include <climits>

using namespace std;

int getMax(int num[], int n)
{

    int max = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    // return max
    return max;
}

int getMin(int num[], int n)
{

    int min = INT_MAX;

    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    // return max
    return min;
}

int main()
{
    int size = 5;
    // cin >> size;

    int num[] = {1,2,3,4,5};

    // talking num of array
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> num[i];
    // }

    cout << "Maximum Value is " << getMax(num, size) << endl;
    cout << "Minimum Value is " << getMin(num, size) << endl;

    return 0;
}