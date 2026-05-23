// 3Sum -> Problem leetCode
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> nums = {1, 2, 0, 1, 0, 0, 0, 0};
    sort(nums.begin(), nums.end());
    vector<vector<int>> matrix;
    // int left = 0, right = nums.size() - 1, mid = 1;

    for (int i = 0; i < nums.size(); i++)
    {
        if (i > 0 && nums[i] == nums[i - 1])
            continue;
        int left = i + 1, right = nums.size() - 1;
        while (left < right)
        {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0)
            {
                matrix.push_back({nums[i], nums[left], nums[right]});
                left++;
                right--;
                // Evitamos duplicados.
                while (left < right && nums[left] == nums[left - 1])
                    left++;

                while (left < right && nums[right] == nums[right + 1])
                    right--;
            }
            else if (sum > 0)
            {
                right--;
            }
            else
            {
                left++;
            }
        }
    }

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
};