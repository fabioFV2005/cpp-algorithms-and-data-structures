//
// Created by Fabio on 14/09/2026.
//
#include <iostream>

using namespace std;

bool is_multiple_of_ten(int n) {
    return n % 10 == 0;
}
int main() {
    int n, k;
    cin >> n >> k;
    while (k--) {
        if (!is_multiple_of_ten(n)) n--;
        else n /= 10;
    }
    cout << n << endl;
    return 0;
}