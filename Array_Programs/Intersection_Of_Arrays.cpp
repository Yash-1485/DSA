#include <iostream>
using namespace std;

void intersection_Array(int arr1[], int arr2[], int size1, int size2)
{
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr2[j] << " ";
            }
        }
    }
    cout << endl;
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
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int arr2[] = {1, 3, 4, 7, 6, 0};
    int size1 = 10;
    int size2 = 6;

    cout << "Array 1: ";
    printArray(arr1, size1);

    cout << "Array 2: ";
    printArray(arr2, size2);

    cout << "Array after intersection: ";
    intersection_Array(arr1, arr2, size1, size2);

    return 0;
}