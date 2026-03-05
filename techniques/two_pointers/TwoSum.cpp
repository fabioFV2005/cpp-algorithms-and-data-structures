#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool twoSum(vector<int> &arr, int target)
{
    int left = 0, right = arr.size() - 1, sum = 0;
    while (left < right)
    {
        sum = arr[left] + arr[right];
        if (sum == target)
            return true;
        else if (sum > target)
            right -= 1;
        else
            left += 1;
    }
    return false;
}

int main()
{
    vector<int> arr = {1, 4, 45, 6, 10, -8};
    int target = 100;
    sort(arr.begin(), arr.end(), [](int a, int b)
         { return a < b; });
    cout << (twoSum(arr, target) ? "YES" : "NO") << endl;
}