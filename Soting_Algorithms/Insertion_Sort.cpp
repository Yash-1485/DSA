#include <iostream>
using namespace std;

// Time Complexity - O(n^2)
void selection_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int prev = i - 1;

        while (prev >= 0 && arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = current;
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

    selection_sort(arr, n);
    printArray(arr, n);

    return 0;
}