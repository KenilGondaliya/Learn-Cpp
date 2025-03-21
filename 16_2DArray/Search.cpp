#include <iostream>
#include <vector>
using namespace std;

bool searchMatrix(vector<vector<int>> &matrix, int target)
{
    int size = matrix.size() * matrix[0].size();

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {

        int mid = start + (end - start) / 2;

        int row = mid / matrix[0].size();
        int col = mid % matrix[0].size();
        int ele = matrix[row][col];

        if (ele == target)
        {
            return true;
        }
        else if (ele < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return false;
}

int main()
{

    vector<vector<int>> matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int target = 5;

    searchMatrix(matrix, target);
}