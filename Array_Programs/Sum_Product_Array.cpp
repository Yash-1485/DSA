#include <iostream>
using namespace std;

int sumOfArray(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    return sum;
}

int productOfArray(int arr[], int size)
{
    int mul = 1;
    for (int i = 0; i < size; i++)
    {
        mul *= arr[i];
    }
    return mul;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = 10;

    cout << sumOfArray(arr, sz) << endl;
    cout << productOfArray(arr, sz) << endl;

    return 0;
}