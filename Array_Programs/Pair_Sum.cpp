#include <iostream>
#include <vector>
using namespace std;

// Brute Force Approach - O(n^2)
vector<int> pair_sum_1(vector<int> nums, int target_sum)
{
    int sz = nums.size();
    vector<int> ans;
    for (int i = 0; i < sz; i++)
    {
        for (int j = i + 1; i < sz; j++)
        {
            if ((nums[i] + nums[j]) == target_sum)
            {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

// Optimum Approach - Two Pointer Method - O(n)
vector<int> pair_sum(vector<int> nums, int target_sum)
{
    int size = nums.size();
    int i = 0;
    int j = size - 1;
    vector<int> ans;

    while (i < j)
    {
        int sum = nums[i] + nums[j];
        if (sum == target_sum)
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if (sum < target_sum)
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {2, 7, 11, 15};
    int target_sum = 13;

    cout << "Ans: ";
    vector<int> ans = pair_sum(arr, target_sum);
    for (int val : ans)
    {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}