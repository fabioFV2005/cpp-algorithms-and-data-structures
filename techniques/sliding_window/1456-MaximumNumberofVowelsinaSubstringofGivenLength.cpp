//
// Created by Fabio on 08/08/2026.
//
#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

static bool isVowel(const char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main() {
    string s = "abciiidef", subString;
    int k = 3;
    int count = 0;
    for (int i = 0; i < k; i++) {
        if (isVowel(s[i]))count++;
    }
    int max_count = count;
    for (int i = k; i < s.length(); i++) {
        if (isVowel(s[i - k])) {
            count--;
        }

        if (isVowel(s[i])) {
            count++;
        }
        max_count = max(max_count, count);
    }
    cout << max_count << endl;
    return 0;
}
