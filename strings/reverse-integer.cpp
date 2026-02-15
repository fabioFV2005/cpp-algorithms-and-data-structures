#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string number, aux;
    cin >> number;
    if (number[0] == '-')
    {
        aux = number.substr(1, number.size() - 1);
        cout << '-' << string(aux.rbegin(), aux.rend()) << endl;
    }
    else
    {
        cout << string(number.rbegin(), number.rend()) << endl;
    }
}
