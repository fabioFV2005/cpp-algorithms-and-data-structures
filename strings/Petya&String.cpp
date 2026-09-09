//
// Created by Fabio on 08/09/2026.
//
#include <iostream>
#include <cctype>
using namespace std;

int solve(string s1, string s2) {
    for (int i = 0; i < s1.length(); i++) {
        if (tolower(s1[i]) < tolower(s2[i])) return -1;
        if ( tolower(s2[i]) < tolower(s1[i])) return 1;
    }
    return 0;
}
int main() {

    string s1, s2;
    cin >>  s1 >> s2;
    cout << solve(s1, s2)<< endl;
    return 0;
}
