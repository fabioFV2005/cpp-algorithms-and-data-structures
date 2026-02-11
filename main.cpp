//  1068 - Parentheses Balance
#include <vector>
#include <algorithm>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    bool control = true;
    int count_left = 0, count_right = 0;
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string expression = "";
    while (cin >> expression)
    {
        control = true;
        count_left = 0, count_right = 0;
        expression.erase(
            remove_if(expression.begin(), expression.end(), [](char c)
                      { return c != '(' && c != ')'; }),
            expression.end());
        for (char c : expression)
        {

            if (c == '(')
            {
                count_left++;
            }
            if (c == ')')
            {
                count_right++;
            }
            if (count_right > count_left)
            {
                control = false;
                break;
            }
        }
        if (count_left == count_right && control)
        {
            cout << "correct\n";
        }
        else
        {
            cout << "incorrect\n";
        }
    }
    return 0;
}
