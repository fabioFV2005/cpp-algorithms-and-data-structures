//
// Created by Fabio on 08/08/2026.
//
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(4);
    vector<int> nums = {-1};
    int k = 1;
    int left = 0,  right = k;
    double max_average = INT_MIN;
    while (right <= nums.size()) {
        int sum = 0;
        for (int i = left; i < right; i++) {
            sum += nums[i];
        }
        max_average = max(max_average, static_cast<double>(sum) / k);
        right++;
        left++;
    }
    cout << max_average << endl;

    // cout << nums[0];
    return 0;
}
