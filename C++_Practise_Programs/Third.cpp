#include <iostream>
#include <string>
using namespace std;

// void primeNumbers(int n)
// {
//     if (n <= 1)
//     {
//         cout << "No Prime numebrs found";
//         return;
//     }

//     cout << "Prime Numbers:-\n";
//     for (int itr = 2; itr <= n; itr++)
//     {
//         int i = 2;
//         bool flag = true;
//         while (i < itr)
//         {
//             if ((itr % i) == 0)
//             {
//                 flag = false;
//                 break;
//             }
//             i += 1;
//         }
//         if (flag)
//         {
//             cout << itr << endl;
//         }
//     }
// }
string reverseString(string a)
{
    string ans = "";

    for (int i = a.length() - 1; i >= 0; i--)
    {
        ans += (char)(a.at(i));
    }
    return ans;
}

string decimalToBinary(int n)
{

    string ans = "";

    int i = 2;

    while (n > 0)
    {
        ans.append(to_string(n % 2));
        n /= 2;
    }

    return reverseString(ans);
}

int main()
{

    // primeNumbers(50);
    cout << decimalToBinary(42);

    // cout << "Hello";
    return 0;
}