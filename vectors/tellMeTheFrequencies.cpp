#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string str;
    bool first = true;

    while (getline(cin, str))
    {
        vector<int> freq(256, 0);
        for (char c : str)
            freq[c]++;

        vector<pair<int, int>> arr;
        for (int i = 0; i < 256; i++)
            if (freq[i] != 0)
                arr.push_back({i, freq[i]});

        sort(arr.begin(), arr.end(), [](auto a, auto b)
             {
                 if (a.second != b.second)
                     return a.second < b.second; 
                 return a.first > b.first; });

        if (!first)
            cout << "\n";
        first = false;
        for (auto p : arr)
            cout << int(p.first) << " " << p.second << "\n";
    }
}
