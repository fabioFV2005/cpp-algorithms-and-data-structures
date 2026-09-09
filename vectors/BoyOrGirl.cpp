//
// Created by Fabio on 08/09/2026.
//
#include <iostream>
#include <vector>
using namespace std;

bool is_odd(int number) {
    return (number % 2 == 0);
}
int main() {
    vector<int> freq(26, 0);
    string str;
    int count = 0;
    cin >> str;
    for (char c : str) {
        freq[c]++;
    }
    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            count++;
        }
    }
    is_odd(count)? cout << "CHAT WITH HER!" << endl : cout << "IGNORE HIM!" << endl;
    return 0;
}
