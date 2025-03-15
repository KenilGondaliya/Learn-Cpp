#include <iostream>
using namespace std;

int main()
{
    int number = -6;
    int neg_number = ~number + 1; // Two’s complement (negation)

    // Binary representation of `number`
    int result1 = 0, place_value1 = 1;
    int temp1 = number;
    while (!(temp1 == 0 || temp1 == -1))
    {
        int bit = temp1 & 1;
        result1 += bit * place_value1;
        temp1 = temp1 >> 1;
        place_value1 *= 10;
    }

    // Binary representation of `neg_number` (Two's complement result)
    int result2 = 0, place_value2 = 1;
    int temp2 = neg_number;
    while (!(temp2 == 0 || temp2 == -1))
    {
        int bit = temp2 & 1;
        result2 = (bit * place_value2) + result2;
        temp2 = temp2 >> 1;
        place_value2 *= 10;
    }

    cout << "Binary of " << number << ": " << result1 << endl;
    cout << "Binary of " << neg_number << " (Two's complement): " << result2 << endl;

    return 0;
}
