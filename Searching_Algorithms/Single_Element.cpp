#include <iostream>
#include <vector>
using namespace std;

// Rotated but Sorted Array
// Time Complexity - O(log n)
int singleElement(vector<int> &A)
{
    int n = A.size();
    int start = 0;
    int end = n - 1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);
        if (mid == 0 && A[0] != A[1])
            return A[mid];
        if (mid == n - 1 && A[n - 2] != A[n - 1])
            return A[mid];
        if (A[mid - 1] != A[mid] && A[mid] != A[mid + 1])
            return A[mid];

        // Even Elements
        if (mid % 2 == 0)
        {
            if (A[mid - 1] == A[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else // Odd Element
        {
            if (A[mid - 1] == A[mid])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> nums = {1, 1, 2, 3, 3, 4, 4, 9, 9};
    // vector<int> nums = {1, 1, 2, 2, 3, 9, 9};
    cout << singleElement(nums) << endl;
    return 0;
}