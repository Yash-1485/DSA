#include <iostream>
using namespace std;

// Reverse a String
string reverse(string org)
{
    string rev = "";

    for (int i = org.length() - 1; i >= 0; i--)
    {
        rev += ((char)org.at(i));
    }

    return rev;
}

// Decimal to Binary
int decToBinary(int n)
{
    int ans = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 2;
        ans += (rem * pow);
        pow *= 10;
        n /= 2;
    }
    return ans;
}

// Binary to Decimal
int binToDecimal(int n)
{
    int ans = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 10;
        ans += (rem * pow);
        pow *= 2;
        n /= 10;
    }
    return ans;
}

// HexDigit
char hexDigit(int n)
{
    if (n < 10)
    {
        return '0' + n;
    }
    else
    {
        return 'A' + (n - 10);
    }
}

// Decimal to Hexadecimal
string decToHex(int n)
{
    string ans = "";

    while (n > 0)
    {
        int rem = n % 16;
        ans += (hexDigit(rem));
        n /= 16;
    }

    return reverse(ans);
}

int main()
{
    cout << decToBinary(42) << endl;
    cout << binToDecimal(101010) << endl;
    cout << decToHex(6789) << endl;
    return 0;
}
