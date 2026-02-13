#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string number;
    cin >> number;
    string aux = number;
    reverse(aux.begin(), aux.end());
    if (number == aux)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
