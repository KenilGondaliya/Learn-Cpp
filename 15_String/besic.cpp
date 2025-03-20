#include <iostream>

using namespace std;

// lower case
char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

// Palinrom
bool checkPalindrom(char a[], int n)
{

    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        if (toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
            break;
        }
        else
        {
            s++;
            e--;
        }
    }

    return 1;
}

// reverse string
void reverseString(char name[], int n)
{
    int s = 0;
    int e = n - 1;

    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}

// get length/size of string
int getLength(char name[])
{

    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20] = "Kenil";

    int len = getLength(name);

    // cout << getLength(name) << endl;

    // reverseString(name, len);

    cout << checkPalindrom(name, len) << endl;

    return 0;
}


//optimal code
// #include <bits/stdc++.h> 

// bool checkPalindrome(string s) {
//     string filtered = "";

//     // Filter valid characters (alphabets & numbers) and convert to lowercase
//     for (char ch : s) {
//         if (isalnum(ch)) {
//             filtered += tolower(ch);
//         }
//     }

//     // Check if the filtered string is a palindrome
//     int start = 0, end = filtered.size() - 1;
//     while (start < end) {
//         if (filtered[start] != filtered[end]) {
//             return false;
//         }
//         start++;
//         end--;
//     }
//     return true;
// }
