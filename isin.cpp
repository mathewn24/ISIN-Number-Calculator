/*
Name: MATHEWS, Noel
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sisin;

    cout << "Enter partial HK ISIN: ";
    cin >> sisin;

    // 1. Double the odd-positioned digits d1 , d3 , d5 , d7 , and d9).
    int d1, d3, d5, d7, d9;
    // Convert each char in the input string to its
    // respective integer value by subtracting the '0' char value.
    // Then double each digit according to the algorithm.

    d1 = sisin[0] - '0';
    d1 *= 2;
    d3 = sisin[2] - '0';
    d3 *= 2;
    d5 = sisin[4] - '0';
    d5 *= 2;
    d7 = sisin[6] - '0';
    d7 *= 2;
    d9 = sisin[8] - '0';
    d9 *= 2;

    // 2. If a doubled digit is greater than 9, replace it by its sum of digits.
    int oddmod[5] = {d1, d3, d5, d7, d9};
    int left, right, sum;

    for (int i = 0; i < 5; i++)
    {
        if (oddmod[i] > 9)
        {
            left = oddmod[i] / 10 % 10; // Get the left digit of the number
            right = oddmod[i] % 10;     // Get the right digit of the number
            sum = left + right;         // Sum the two digits
            oddmod[i] = sum;
        }
    }

    // 3. Sum the even positioned digits with theh modified odd positioned digits.
    int d2, d4, d6, d8;

    d2 = sisin[1] - '0';
    d4 = sisin[3] - '0';
    d6 = sisin[5] - '0';
    d8 = sisin[7] - '0';

    int total = 0;

    total =
        oddmod[0] + d2 + oddmod[1] +
        d4 + oddmod[2] + d6 +
        oddmod[3] + d8 + oddmod[4];

    // 4. Add 13 to the sum and then multiply the sum by 9. 
    // The units digit of the multiplication is the check digit d10.
    
    total = (total + 13) * 9;
    int d10 = total % 10;

    cout << "Full HK ISIN is HK" << sisin << d10 << endl;

    return 0;
}

/*
Test cases:
i: 035849126
o: Full HK ISIN is HK0358491261

i: 987654321
o: Full HK ISIN is HK9876543214

i: 000812056
o: Full HK ISIN is HK0008120567
*/