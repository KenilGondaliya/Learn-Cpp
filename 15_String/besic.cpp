#include <iostream>
#include <string>

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

char getMaxOccCharacter(string s)
{
    int arr[26] = {0};

    // create an arr of coutn character
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        // lowerCase
        int number = 0;
        if (ch >= 'a' && ch <= 'z')
        {
            number = ch - 'a';
        }
        else
        { // uperchase
            number = ch - 'A';
        }

        arr[number]++;
    }

    int maxi = -1, ans = 0;
    for (int i = 0; i < 26; i++)
    {
        if (maxi < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }

    char finalAns = 'a' + ans;
    return finalAns;
}

int main()
{
    // char name[20] = "Kenil";

    // int len = getLength(name);

    // cout << getLength(name) << endl;

    // reverseString(name, len);

    // cout << checkPalindrom(name, len) << endl;

    string s = "test";

    cout << getMaxOccCharacter(s);

    return 0;
}

// optimal code
//  #include <bits/stdc++.h>

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
