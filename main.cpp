#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool solve(string s, string t) {
    reverse(t.begin(), t.end());
    return s == t;
}
int main() {
    string s, t;
    cin >> s >> t;
    if (solve(s, t))cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}
