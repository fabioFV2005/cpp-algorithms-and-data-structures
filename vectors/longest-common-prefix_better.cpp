#include <iostream>
#include <vector>
#include <string>
using namespace std;

string longestCommonPrefix(vector<string> &strs)
{
    string prefix = strs[0];

    for (int i = 1; i < strs.size(); i++)
    {
        while (strs[i].find(prefix) != 0)
        {
            prefix.pop_back();

            if (prefix.empty())
                return "";
        }
    }

    return prefix;
}

int main()
{
    vector<string> strs = {
        "flower",
        "flow",
        "flight"};

    cout << longestCommonPrefix(strs);

    return 0;
}