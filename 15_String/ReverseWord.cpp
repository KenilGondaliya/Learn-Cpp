#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void displayStr(vector<char> string)
{

    int n = string.size();

    for (char i = 0; i < n; i++)
    {
        cout << string[i];
    }
}

void reverseWord(vector<char> string)
{

    int n = string.size();

    reverse(string.begin(), string.end());

    displayStr(string);
}

int main()
{
    vector<char> string = {'k', 'e', 'n', 'i', 'l', ' ', 'g', 'o', 'n', 'd', 'a', 'l', 'i', 'y', 'a', ' ', 'i', 's', ' ', 'h', 'e', 'r', 'o'};

    return 0;
}