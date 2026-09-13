//
// Created by Fabio on 13/09/2026.
//
#include <iostream>
#include <string>
#include <cctype>

#include <algorithm>
using namespace std;
bool isUppercase(char x) {
    return (x >= 'A' && x <= 'Z');
}
string transformF(bool control, string str) {
    if (control)transform(str.begin(), str.end(), str.begin(), ::tolower);
    else transform(str.begin(), str.end(), str.begin(), ::toupper);
    return str;
}
void solve(string str) {
    int uppercaseCount = 0, lowercaseCount = 0;
    for (int i = 0; i < str.length(); i++) {
        if (!isUppercase(str[i]))  lowercaseCount++;
        else uppercaseCount++;
    }
    if (uppercaseCount == lowercaseCount) {
        transform(str.begin(), str.end(), str.begin(), ::tolower);

    }else {
        str = transformF(uppercaseCount < lowercaseCount, str);
    }
    cout << str << endl;
}
int main() {

    string str;
    cin >> str;
    solve(str);
    return 0;
}