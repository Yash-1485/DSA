#include <iostream>
#include <vector>
using namespace std;

// Time Complexity - O(n^2)
void bubble_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool isSwap = false;

        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }

        if (!isSwap)
        {
            return;
        }
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {55, 32, 14, 78, 90, 23, 45};
    int n = 7;

    bubble_sort(arr, n);
    printArray(arr, n);
    return 0;
}