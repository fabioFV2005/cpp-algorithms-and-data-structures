//
// Created by Fabio on 13/09/2026.
//
#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

int solve(int w, int k) {
    int sum = 0;
    for (int i = w; i >=1; i--)  {
        sum += i*k;
    }
    return sum;
}
int main() {

    int k,n,w;
    // k is the initial price of one banana,
    // w is the number of bananas he wants to buy,
    // n is the amount of money he has.
    cin >> k >> n >> w;
    int total = solve(w,k);
    (total - n) > 0 ? cout << total - n << endl: cout << 0 << endl;
    return 0;
}