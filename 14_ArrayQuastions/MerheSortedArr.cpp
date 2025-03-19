// #include <iostream>

// using namespace std;

// int displayArr(int arr3[], int size)
// {

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr3[i];
//     }

//     cout << endl;
// }

// void merge(int arr1[], int n, int arr2[], int m, int arr3[])
// {

//     int i = 0;
//     int j = 0;
//     int k = 0;

//     while (i < n && j < m)
//     {
//         if (arr1[i] < arr2[j])
//         {
//             arr3[k++] = arr1[i++];
//             // k++;
//             // i++;
//         }
//         else
//         {
//             arr3[k++] = arr2[j++];
//             // k++;
//             // j++;
//         }
//     }

//     // copy first arr1[]  element

//     while (i < n)
//     {
//         arr3[k++] = arr1[i++];
//         // k++;
//         // i++;
//     }

//     // coppy second arr2 element

//     while (j < m)
//     {
//         arr2[k++] = arr2[i++];
//         // k++;
//         // i++;
//     }
// }

// int main()
// {
//     int arr1[5] = {1, 3, 5, 7, 9};
//     int arr2[3] = {2, 4, 6};

//     int arr3[8] = {0};

//     merge(arr1, 5, arr2, 3, arr3);

//     displayArr(arr3, 8);

//     return 0;
// }

#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
{

    int i = m - 1;
    int j = n - 1;
    int k = m + n - 1;

    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
        {
            nums1[k--] = nums1[i--];
        }
        else
        {
            nums1[k--] = nums2[j--];
        }
    }
    while (j >= 0)
    {
        nums1[k--] == nums2[j--];
    }
}

int main()
{
    vector<int> nums1 = {1, 2, 0, 0, 0, 0, 0};
    vector<int> nums2 = {1, 2, 5, 6, 5};
    int m = 2, n = 5;
    merge(nums1, m, nums2, n);

    cout << "Merged Array: ";
    for (int num : nums1)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}