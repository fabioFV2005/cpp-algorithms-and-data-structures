#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solve(vector<int> &arr)
{
    int left = 0, right = arr.size() - 1, max_area = 0;

    while (left < right)
    {
        int temp_area = (right - left) * (min(arr[left], arr[right]));
        if (arr[right] < arr[left])
            right--;
        else
            left++;
        max_area = max(max_area, temp_area);
    }
    return max_area;
}
int main()
{
    vector<int> arr = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int max_area = solve(arr);
    cout << max_area << endl;
}