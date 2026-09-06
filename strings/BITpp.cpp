//
// Created by Fabio on 06/09/2026.
//
#include <iostream>
#include <iomanip>
using namespace std;

int increase_or_decrease(string s) {
    if (s == "++X" || s == "X++") return 1;
    else return -1;
}
int main() {
    int n, count = 0;
    string s;
    cin >> n;
    while (n--) {
        cin >> s;
        count += increase_or_decrease(s);
    }
    cout << count << endl;
    return 0;
}
