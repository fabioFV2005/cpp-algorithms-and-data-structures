// 3sum-closest-> Problem leetCode
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(vector<int> &nums, int target)
{
    sort(nums.begin(), nums.end());

    int closest = nums[0] + nums[1] + nums[2];

    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;

        int left = i + 1, right = nums.size() - 1;

        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];

            if (abs(sum - target) < abs(closest - target))
                closest = sum;

            if (sum == target)
                return sum;
            else if (sum > target)
                right--;
            else
                left++;
        }
    }
    return closest;
}
int main()
{
    vector<int> nums = {0, 0, 0};
    sort(nums.begin(), nums.end());
    cout << solve(nums, 2) << endl;
    return 0;
};