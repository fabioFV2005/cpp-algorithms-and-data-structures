#include <iostream>
#include <vector>

using namespace std;
// beecrowd | 1238
// combiner

vector<int> solve(const vector<int> &nums, int target)
{
    int left = 0;

    while (left < nums.size())
    {
        for (int right = left + 1; right < nums.size(); right++)
        {
            if (nums[left] + nums[right] == target)
            {
                return {left, right};
            }
        }
        left++;
    }
    return {0, 0};
}
int main()
{
    vector<int> nums{2, 7, 11, 15};
    int target = 9;
    solve(nums, target);
    return 0;
}