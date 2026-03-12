#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    while (n--)
    {
        string s;
        getline(cin, s);

        int mid = s.size() / 2;

        reverse(s.begin(), s.begin() + mid);
        reverse(s.begin() + mid, s.end());

        cout << s << '\n';
    }

    return 0;
}