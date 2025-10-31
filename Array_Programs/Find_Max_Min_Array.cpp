#include <iostream>
using namespace std;

int maxOfArray(int arr[], int size)
{
    int maxEle = INT32_MIN; // Can be imagined as -ve Infinity - Means maximum Number

    for (int i = 0; i < size; i++)
    {
        // if (arr[i] > maxEle)
        // {
        //     maxEle = arr[i];
        // }

        maxEle = max(arr[i], maxEle);
    }

    return maxEle;
}

int minOfArray(int arr[], int size)
{
    int minEle = INT32_MAX; // Can be imagined as +ve Infinity - Means most maximum Number

    for (int i = 0; i < size; i++)
    {
        // if (arr[i] < minEle)
        // {
        //     minEle = arr[i];
        // }

        minEle = min(arr[i], minEle);
    }

    return minEle;
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}

void swapMinMax(int arr[], int size)
{
    // int maxEle = maxOfArray(arr, size);
    // int minEle = minOfArray(arr, size);

    // int maxIdx = 0;
    // int minIdx = 0;

    // for (int i = 0; i < size; i++)
    // {
    //     if (arr[i] == maxEle)
    //     {
    //         maxIdx = i;
    //     }
    //     if (arr[i] == minEle)
    //     {
    //         minIdx = i;
    //     }
    // }

    // swap(arr[minIdx], arr[maxIdx]);

    // Without using minimum and maximum element function

    int maxEle = arr[0];
    int minEle = arr[0];

    int maxIdx = 0;
    int minIdx = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxEle)
        {
            maxEle = arr[i];
            maxIdx = i;
        }
        if (arr[i] < minEle)
        {
            minEle = arr[i];
            minIdx = i;
        }
    }

    swap(arr[maxIdx], arr[minIdx]);
}

int main()
{
    int arr[] = {55, 34, 23, -76, 89, 12, 33, 456, 12, 67, 34};
    int sz = 11;
    cout << maxOfArray(arr, sz) << endl;
    cout << minOfArray(arr, sz) << endl;

    cout << "Array before swapping maximum and minimum element" << endl;
    printArray(arr, sz);

    swapMinMax(arr, sz);
    cout << "Array after swapping maximum and minimum element" << endl;
    printArray(arr, sz);
    return 0;
}