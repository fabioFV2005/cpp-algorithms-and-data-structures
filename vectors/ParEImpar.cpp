// 1259 - Par e Impar
// https://judge.beecrowd.com/es/problems/view/1259
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// void solve()
// {
// }
int main()
{
    int attempts, value;
    cin >> attempts;
    vector<int> numbers_even;
    vector<int> numbers_odd;

    for (int i = 0; i < attempts; i++)
    {
        cin >> value;
        if (value % 2 == 0)
            numbers_even.push_back(value);
        else
            numbers_odd.push_back(value);
    }
    sort(numbers_even.begin(), numbers_even.end());
    sort(numbers_odd.begin(), numbers_odd.end(), [](int a, int b)
         { return a > b; });
    for (int i = 0; i < numbers_even.size(); i++)
    {
        cout << numbers_even[i] << endl;
    }
    for (int i = 0; i < numbers_odd.size(); i++)
    {
        cout << numbers_odd[i] << endl;
    }
}
