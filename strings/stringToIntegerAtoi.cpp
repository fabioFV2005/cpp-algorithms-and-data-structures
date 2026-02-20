#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int pos = 0;
    string str = "   -123b4567890";
    string aux_str;
    char c = str[pos];
    while (c == ' ')
    {
        pos += 1;
        c = str[pos];
    }

    str = str.substr(pos);
    pos = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ' && (aux_str.empty()))
            continue;
        if ((str[i] >= '0' && str[i] <= '9') || (str[i] == '-' && aux_str.empty()))
        {
            pos++;
            aux_str += str[i];
        }
        else
            break;
    }
    int int_value = 0, unit_value = 1;
    long long sum = 0;
    cout << aux_str << endl;
    while (pos--)
    {
        if (aux_str[pos] == '-')
        {
            sum *= -1;
            break;
        }
        int_value = aux_str[pos] - '0';

        sum += int_value * unit_value;
        if (sum > INT_MAX)
            return INT_MAX;
        if (sum < INT_MIN)
            return INT_MIN;
        unit_value *= 10;
    }
    return sum;

    return 0;
}
