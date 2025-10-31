#include <iostream>
using namespace std;

int linear_search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

// Time Complexity - O(n)

int main()
{
    int arr[] = {1, 45, 67, 23, 99, 54, 32, 98, 53};
    int size = 9;
    int target = 99;
    cout << linear_search(arr, size, target) << endl;
    return 0;
}