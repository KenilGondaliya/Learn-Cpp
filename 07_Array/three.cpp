#include <iostream>

using namespace std;

int totalChaiServed(int chai[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += chai[i];
    }
    return total;
}

int main()
{
    int chaiServed[7] = {50, 60, 55, 77, 80, 89, 90};
    int size = 7;

    int total = totalChaiServed(chaiServed, size);
    return 0;
}