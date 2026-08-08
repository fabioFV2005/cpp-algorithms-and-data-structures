//
// Created by Fabio on 08/08/2026.
//
#include <iostream>
#include <vector>
using namespace std;

int main() {
    const vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int left = 0;
    int right = height.size() - 1;
    int max_area = 0;
    while (left <= right)
    {
        int area = min(height[left], height[right]);
        max_area = max(max_area, area * (right - left)  );
        if (height[left] < height[right]) {
            left++;
        }else {
            right--;
        }

    }
    cout << max_area;
    return 0;
}
