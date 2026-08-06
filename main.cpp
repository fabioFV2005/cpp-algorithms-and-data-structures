#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    int write = 0, read = 0;
    while (read < nums.size()) {
        if (nums[read] == 0) {
            for (int i = read; i < nums.size(); i++) {
                if (nums[i] != 0) {
                    nums[read] = nums[i];
                    nums[i] = 0;
                    break;
                }

            }
        }
        read++;

    }
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
