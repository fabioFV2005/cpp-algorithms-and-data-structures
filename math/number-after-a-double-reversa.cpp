#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int reverse(int val)
{
    int aux, result = 0;
    while (val / 10 != 0)
    {
        aux = val % 10;
        val /= 10;

        result = result * 10 + aux;
    }
    return result * 10 + val;
}
int main()
{
    int val, original_value;
    cin >> val;
    original_value = val;
    int new_value = reverse(val);
    if (original_value == new_value)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
