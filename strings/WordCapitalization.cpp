//
// Created by Fabio on 09/09/2026.
//
#include <iostream>
#include <cctype>
using namespace std;


int main() {
    string s;
    cin >> s;
    s[0] = toupper(s[0]);
    cout << s;
    return 0;
}
