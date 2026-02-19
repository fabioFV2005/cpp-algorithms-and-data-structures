#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string solve(int value, int pos)
{
    vector<string> units = {
        "",
        "I",
        "II",
        "III",
        "IV",
        "V",
        "VI",
        "VII",
        "VIII",
        "IX"};
    vector<string> tens = {
        "",
        "X",
        "XX",
        "XXX",
        "XL",
        "L",
        "LX",
        "LXX",
        "LXXX",
        "XC"};
    vector<string> hundreds = {
        "",
        "C",
        "CC",
        "CCC",
        "CD",
        "D",
        "DC",
        "DCC",
        "DCCC",
        "CM"};
    vector<string> thousands = {
        "",
        "M",
        "MM",
        "MMM"};

    if (pos == 1)
    {
        return units[value];
    }
    else if (pos == 10)
    {
        return tens[value];
    }
    else if (pos == 100)
    {
        return hundreds[value];
    }
    else if (pos == 1000)
    {
        return thousands[value];
    }
    return "none";
}

int main()
{
    int value, count = 1, aux;
    cin >> value;
    string str;
    while (value / 10 != 0)
    {
        str.insert(0, solve(value % 10, count));
        count *= 10;
        value /= 10;
    }
    str.insert(0, solve(value % 10, count));
    cout << str << endl;
    return 0;
}
