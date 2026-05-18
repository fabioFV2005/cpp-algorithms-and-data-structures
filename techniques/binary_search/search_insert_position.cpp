#include <iostream>
// #include <stack>
#include <vector>
#include <algorithm>
using namespace std;

int binary_search(const vector<int> &v, int target)
{
    int right = 0, left = v.size() - 1, mid;
    while (right <= left)
    {

        mid = right + (left - right) / 2;
        if (v[mid] == target)
        {
            return mid;
        }
        else if (v[mid] < target)
        {
            right = mid + 1;
        }
        else
        {
            left = mid - 1;
        }
    }

    return right;
};

int main()
{
    vector<int> v = {1, 3, 5, 6};
    int result = binary_search(v, 7);
    cout << result << endl;
};