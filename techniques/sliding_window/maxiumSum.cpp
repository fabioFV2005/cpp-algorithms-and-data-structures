#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxSum(vector<int> &arr, int k)
{
    int n = arr.size();
    int max_sum = INT_MIN;
    // Consider all blocks starting with i
    for (int i = 0; i <= n - k; i++)
    {
        int current_sum = 0;
        // Calculate sum of current subarray of size k

        for (int j = 0; j < k; j++)
        {
            current_sum += arr[i + j];
        }
        // Update result if required
        max_sum = max(current_sum, max_sum);
    }
    return max_sum;
}
int main(int argc, char const *argv[])
{
    vector<int> arr = {5, 2, -1, 0, 3};
    int k = 3;
    cout << maxSum(arr, k) << endl;
    return 0;
}
