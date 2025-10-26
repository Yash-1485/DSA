#include <iostream>
using namespace std;

bool isPrime(int n)
{
    int i = 2;
    if (n <= 1)
    {
        return false;
    }

    while (i < n)
    {
        if (n % i == 0)
        {
            return false;
        }
        i++;
    }
    return true;
}

int numOfDigits(int n)
{
    int count = 0;

    while (n > 0)
    {
        count += 1;
        n /= 10;
    }

    return count;
}

int power(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    return base * power(base, exp - 1);
}

// vector<int>
// pointer
bool isArmstrongNum(int n)
{
    int count = numOfDigits(n);
    int temp = n;
    int sum = 0;
    while (temp > 0)
    {
        int digit = (temp % 10);
        sum += power(digit, count);
        temp /= 10;
    }

    return n == sum;
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    // cout << "Hey there,\n" << "My name is Yash.\n";
    // return 0;

    // int age;
    // cout << "Enter your age:  ";
    // cin >> age;
    // cout << "Your age is: " << age << endl;

    // int sum = 0;
    // int n;
    // cout << "Enter any number here: ";
    // cin >> n;

    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }

    // int i=1;
    // // while(i<=n){
    // //     sum+=i;
    // //     i++;
    // // }

    // do{
    //     sum+=i;
    //     i++;
    // }while(i<=n);
    // cout << "Sum from 1 to " << n << " is " << sum;

    // Check for Prime Number

    // int n;
    // cout << "Enter a number: ";
    // cin >> n;

    // cout << (isPrime(n) ? "Prime Number" : "Non Prime Number");

    // Armstrong Number from 1 to N
    // int n;
    // cout << "Enter a number: ";
    // cin >> n;

    // cout << "Armstrong numbers:- \n";
    // for (int i = 1; i <= n; i++)
    // {
    //     if (isArmstrongNum(i))
    //     {
    //         cout << i << "\n";
    //     }
    // }

    // cout << factorial(n);
    int n = 5;
    // int count = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         count += i - 1;
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << count << " ";
    //             count--;
    //         }
    //         count += i + 1;
    //     }
    //     else
    //     {
    //         for (int j = 1; j <= i; j++)
    //         {
    //             cout << count << " ";
    //             count += 1;
    //         }
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = i; j >= 1; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = n; i >= 1; i--)
    // {
    //     for (int k = n; k > i; k--)
    //     {
    //         cout << "  ";
    //     }

    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int k = n; k > i; k--)
    //     {
    //         cout << "  ";
    //     }
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     for (int j = i - 1; j >= 1; j--)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int k = n; k > i; k--)
    //     {
    //         cout << "  ";
    //     }

    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << (j == 1 ? "* " : (j != i) ? "  "
    //                                           : " ");
    //     }

    //     for (int j = i - 1; j >= 1; j--)
    //     {
    //         cout << (j == 1 ? " *" : "  ");
    //     }
    //     cout << endl;
    // }

    // for (int i = n - 1; i >= 1; i--)
    // {
    //     for (int k = n; k > i; k--)
    //     {
    //         cout << "  ";
    //     }

    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << (j == 1 ? "* " : (j != i) ? "  "
    //                                           : " ");
    //     }

    //     for (int j = i - 1; j >= 1; j--)
    //     {
    //         cout << (j == 1 ? " *" : "  ");
    //     }
    //     cout << endl;
    // }

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int k = 1; k <= (n * 2) - (i * 2); k++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }

        for (int k = 1; k <= (n * 2) - (i * 2); k++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}
