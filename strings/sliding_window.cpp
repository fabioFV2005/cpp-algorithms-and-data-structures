#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> freq(256, 0);
    int right = 0, left = 0;
    int max_len = 0;
    string s;
    cin >> s;

    while (right < s.length())
    {
        freq[s[right]]++;

        while (freq[s[right]] > 1)
        {
            freq[s[left]]--;
            left++;
        }

        max_len = max(max_len, right - left + 1);

        right++;
    }

    cout << max_len << endl;
    return 0;
}
