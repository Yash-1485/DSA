#include <iostream>
#include <vector>
using namespace std;

// Rotated but Sorted Array
// Time Complexity - O(log n)
int searchInRotatedArray(vector<int> &A, int target)
{
    int start = 0;
    int end = A.size() - 1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);

        if (target == A[mid])
            return mid;

        if (A[start] <= A[mid]) // Sorted Left
            if (A[start] <= target && target <= A[mid])
                end = mid - 1;
            else
                start = mid + 1;
        else // Sorted Right
            if (A[mid] <= target && target <= A[end])
                start = mid + 1;
            else
                end = mid - 1;
    }

    return -1;
}

int main()
{
    vector<int> nums = {3, 4, 5, 6, 0, 1, 2};
    int target = 2;
    cout << searchInRotatedArray(nums, target) << endl;
    return 0;
}