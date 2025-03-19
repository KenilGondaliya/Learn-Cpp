#include <iostream>
#include <vector>

using namespace std;

void moveZero(vector<int> &arr)
{

    int i = 0;

    for (int j = 0; j < arr.size(); j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[i], arr[j]);
            i++;
        }
    }
}

int main()
{
    vector<int> arr = {0, 1, 0, 2, 4, 0};

    moveZero(arr);


    for (int i: arr)
    {
        cout << "Zero Moved: " << i << endl;
    }
    
    return 0;
}