#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &s, int left, int right)
{
    while (left < right)
    {
        if (s[left] != s[right])
            return false;
        left++;
        right--;
    }
    return true;
}

string checkPalindrome(string str)
{
    string longest = "";

    for (int start = 0; start < str.size(); start++)
    {
        int left = start;
        int right = str.size() - 1;

        while (left <= right)
        {
            if (isPalindrome(str, left, right))
            {
                int len = right - left + 1;
                if (len > longest.size())
                    longest = str.substr(left, len);
                break;
            }
            right -= 1;
        }
    }

    if (longest.empty())
        longest = str.substr(0, 1);

    return longest;
}

int main()
{
    string str;
    cin >> str;
    cout << checkPalindrome(str) << endl;
}