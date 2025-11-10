#include <iostream>
#include <vector>
// #include <algorithm>
using namespace std;

int binary_search(vector<int> &nums, int target)
{
    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int mid = start + ((end - start) / 2);

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;
    }

    return -1;
}

int binary_search_recursive(vector<int> nums, int target, int start, int end)
{
    if (start <= end)
    {
        int mid = start + ((end - start) / 2);

        if (nums[mid] == target)
            return mid;
        else if (nums[mid] > target)
            return binary_search_recursive(nums, target, start, mid - 1);
        else
            return binary_search_recursive(nums, target, mid + 1, end);
    }
    return -1;
}

int main()
{
    vector<int> nums = {12, 23, 34, 45, 56, 67, 78, 89, 90};

    int target = 34;

    // cout << binary_search(nums, target) << endl;
    cout << binary_search_recursive(nums, target, 0, nums.size() - 1) << endl;

    return 0;
}