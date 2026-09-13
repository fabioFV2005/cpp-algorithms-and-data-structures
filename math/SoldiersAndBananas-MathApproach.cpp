//
// Created by Fabio on 13/09/2026.
//
#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

int main() {

    int k,n,w;
    // k is the initial price of one banana,
    // w is the number of bananas he wants to buy,
    // n is the amount of money he has.
    cin >> k >> n >> w;
    // We have the numbers 1, 2, 3, ..., w.
    // The sum of these numbers is:
    // 1 + 2 + 3 + ... + w = w * (w + 1) / 2.
    // Since each banana costs k, we multiply the sum by k.
    int total = k * w * (w + 1) / 2;
    (total - n) > 0 ? cout << total - n << endl: cout << 0 << endl;
    return 0;
}