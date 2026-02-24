#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int maxSum(vector<int> &arr, int k)
{
    int n = arr.size();
    int max_sum = 0;
    if (n <= k)
    {
        cout << "invalid";
        return -1;
    }
    for (int i = 0; i < k; i++)
        max_sum += arr[i];
    int window_sum = max_sum;
    for (int i = k; i < n; i++)
    {
        window_sum += arr[i] - arr[i - k];
        max_sum = max(max_sum, window_sum);
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
