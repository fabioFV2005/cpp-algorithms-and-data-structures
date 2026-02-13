
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        vector<int> mp(128, -1);
        int start = -1;
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            start = max(start, mp[s[i]]);
            mp[s[i]] = i;
            ans = max(ans, i - start);
        }
        return ans;
    }
};