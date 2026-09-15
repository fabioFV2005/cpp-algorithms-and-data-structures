#include <iostream>
#include <string>
using namespace std;

bool NearlyLuckyNumber(char digit) {
    return digit == '4' || digit == '7';
}

int main() {
    int count = 0;
    string digits;
    cin >> digits;
    for (int i = 0; i < digits.length(); i++) {
        if (NearlyLuckyNumber(digits[i])) count++;
    }
    if (count == 4 || count == 7) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}