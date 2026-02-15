#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int nums1[m];
    int nums2[n];
    int nums3[m + n];
    for (int i = 0; i < m; i++)
    {
        cin >> nums1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> nums2[i];
    }
    for (int i = 0; i < m; i++)
    {
        nums3[i] = nums1[i];
    }

    for (int i = 0; i < n; i++)
    {
        nums3[m + i] = nums2[i];
    }
    sort(nums3, nums3 + m + n);
    if ((m + n) % 2 == 0)
    {
        cout << (nums3[(m + n) / 2] + nums3[(m + n) / 2 - 1]) / 2.0 << endl;
    }
    else
    {
        cout << nums3[(m + n) / 2] << endl;
    }
}
