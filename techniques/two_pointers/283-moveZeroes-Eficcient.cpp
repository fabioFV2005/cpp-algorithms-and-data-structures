#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<int> nums = {0, 1, 0, 3, 12};
    int read = 0, write = 0, aux=0;
    while (read < nums.size()) {

        if(nums[read] != 0) {

            aux = nums[read];
            nums[read] = nums[write];
            nums[write] = aux;
            write++;

        }
        read++;

    }
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";
    }
    return 0;
}
