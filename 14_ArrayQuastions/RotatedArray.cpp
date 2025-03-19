#include <iostream>
#include <vector>

using namespace std;

void rotateArr(vector<int> &nums, int k)
{

    vector<int> temp(nums.size());

    for (int i = 0; i < nums.size(); i++)
    {
        temp[(i + k) % nums.size()] = nums[i];
    }

    nums = temp;
}

int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int k = 2;

    rotateArr(nums, k);

    for (int num : nums)
    {
        cout << num;
    }

    cout << endl;
    return 0;
}