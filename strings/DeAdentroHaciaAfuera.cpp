#include <vector>
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    int cases;
    cin >> cases;
    cin.ignore();
    string str, aux = "";
    while (cases--)
    {
        aux = "";

        getline(cin, str);
        int mid = str.size() / 2;
        for (int i = mid - 1; i >= 0; i--)
        {
            aux += str[i];
        }
        for (int i = str.size() - 1; i >= mid; i--)
        {
            aux += str[i];
        }
        cout << aux << endl;
    }
    return 0;
}