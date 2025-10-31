#include <iostream>
using namespace std;

void uniquesOfArray(int arr[], int size)
{
    cout << "Unique elements of Array\n";

    // for (int i = 0; i < size; i++)
    // {
    //     bool flag = true;
    //     int count = 0;
    
    //     for (int j = 0; j < size; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             count++;
    //             if (count > 1)
    //             {
    //                 flag = false;
    //             }
    //         }
    //     }

    //     if (flag)
    //     {
    //         cout << arr[i] << " ";
    //     }
    // }

    // or

    for (int i = 0; i < size; i++)
    {
        bool isUnique = true;
        for (int j = 0; j < size; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }

        if (isUnique)
        {
            cout << arr[i] << " ";
        }
    }

    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 4, 2, 3};
    int sz = 8;

    uniquesOfArray(arr, sz);
    return 0;
}