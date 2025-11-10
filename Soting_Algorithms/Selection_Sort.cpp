#include <iostream>
#include <vector>
using namespace std;

// Time Complexity - O(n^2)
void selection_sort(int A[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[minIdx])
                minIdx = j;
        }
        if (minIdx != i)
            swap(A[i], A[minIdx]);
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