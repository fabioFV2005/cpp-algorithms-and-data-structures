#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<char> stck;
    string s = "[()]";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            stck.push(s[i]);
        }
        if (!stck.empty())
        {
            if (s[i] == ')' && stck.top() == '(' ||
                s[i] == ']' && stck.top() == '[' ||
                s[i] == '}' && stck.top() == '{')
                stck.pop();
        }
    }
    cout << (stck.empty() ? "true" : "false");
}