#include <iostream>
#include <climits>
#include <vector>
using namespace std;

vector<int> spiralPrint(vector<vector<int>> matrix)
{

    vector<int> ans;
    int row = matrix.size();
    int col = matrix[0].size();

    int count = 0;
    int total = row * col;

    // index initialisation
    int startingRow = 0;
    int startingCol = 0;
    int endingRow = row - 1;
    int endingCol = col - 1;

    while (count < total)
    {
        // print starting row
        for (int index = startingCol; index <= endingCol; index++)
        {
            ans.push_back(matrix[startingRow][index]);
            count++;
        }
        startingRow++;

        // print ending col
        for (int index = startingRow; index <= endingRow; index++)
        {
            ans.push_back(matrix[index][endingCol]);
            count++;
        }
        endingCol--;

        // print ending row
        for (int index = endingCol; index >= startingRow; index--)
        {
            ans.push_back(matrix[endingRow][index]);
            count++;
        }
        endingRow--;

        // print endingRow
        for (int index = endingRow; index >= startingRow; index--)
        {
            ans.push_back(matrix[index][startingCol]);
            count++;
        }
        startingCol--;
    }

    return ans;
}

int main()
{
    // create a 2d array ➕
    // int arr[3][4];
    // int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    vector<vector<int>> matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    // int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    spiralPrint(matrix);

    return 0;
}

// class Solution
// {
// public:
//     vector<int> spiralOrder(vector<vector<int>> &matrix)
//     {
//         int n = matrix[0].size() - 1;
//         int m = matrix.size() - 1;
//         int top = 0;
//         int right = n;
//         int left = 0;
//         int bottom = m;

//         vector<int> ans;

//         while (top <= bottom && left <= right)
//         {
//             // Top row
//             for (int i = left; i <= right; i++)
//             {
//                 ans.push_back(matrix[top][i]);
//             }
//             top++;

//             // right col
//             for (int i = top; i <= bottom; i++)
//             {
//                 ans.push_back(matrix[i][right]);
//             }
//             right--;

//             if (top <= bottom)
//             {

//                 // bottom row
//                 for (int i = right; i >= left; i--)
//                 {
//                     ans.push_back(matrix[bottom][i]);
//                 }
//                 bottom--;
//             }

//             if (left <= right)
//             {

//                 // left column
//                 for (int i = bottom; i >= top; i--)
//                 {
//                     ans.push_back(matrix[i][left]);
//                 }
//                 left++;
//             }
//         }
//         return ans;
//     }
// };