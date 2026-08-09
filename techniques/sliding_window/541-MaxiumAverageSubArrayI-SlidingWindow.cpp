//
// Created by Fabio on 08/08/2026.
//
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    cout << fixed << setprecision(4);
    vector<int> nums = {1,12,-5,-6,50,3};
    int k = 4;
    double max_average = INT_MIN;
    int sum = 0;
    for (int i = 0; i < k; i++) {
        sum += nums[i];
    }
    max_average = static_cast<double>(sum) / k;
    for (int i = k; i < nums.size(); i++) {
        sum -= nums[i-k];
        sum += nums[i];
        max_average = max(max_average, static_cast<double>(sum) / k);
    }

    cout << max_average << endl;

    // cout << nums[0];
    return 0;
}
