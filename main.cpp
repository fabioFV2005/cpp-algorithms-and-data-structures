#include <iostream>
#include <vector>

using namespace std;
// beecrowd | 1238
// combiner

vector<int> solve(vector<int> nums, int target)
{
    int left = 0;
    // int results[2]{0};
    vector<int> results;

    while (left < nums.size())
    {
        for (int right = left + 1; right < nums.size(); right++)
        {
            if (nums[left] + nums[right] == target)
            {
                results.push_back(left);
                results.push_back(right);
            }
        }
        left++;
    }
    for (int i = 0; i < results.size(); i++)
    {
        cout << results[i] << " ";
    }
    return results;
}
int main()
{
    vector<int> nums{2, 7, 11, 15};
    int target = 9;
    solve(nums, target);
    return 0;
}