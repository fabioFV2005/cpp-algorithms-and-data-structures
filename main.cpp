#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;


int main() {
    int n;
    int read=1, write=0, count=0;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] == s[i+1]) {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}