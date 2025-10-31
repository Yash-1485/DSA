#include <iostream>
using namespace std;

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    cout << "Array before reversing elements\n";

    printArray(arr, 10);

    cout << "Array after swapping\n";
    reverseArray(arr,10);
    printArray(arr, 10);

    return 0;
}