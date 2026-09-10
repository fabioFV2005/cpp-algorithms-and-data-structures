#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main() {
    string s;
    cin >> s;
    s.erase(
        remove_if(s.begin(), s.end(), [](char c) {
            return c == '+';
        } ), s.end()
        );
    sort(s.begin(), s.end());
    for (int i = 0; i < s.size(); i++) {
        cout << s[i];
        if (i != s.size() - 1) {
            cout << '+';
        }
    }
    cout << endl;
    return 0;
}
