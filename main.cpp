#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(int &val)
{
    int aux, result = 0;
    while (val / 10 != 0)
    {
        aux = val % 10;
        val /= 10;
        if (aux == 0)
            continue;
        result = result * 10 + aux;
    }
    return result * 10 + val;
}
int main()
{
    int val;
    cin >> val;

    cout << solve(val) << endl;
}
