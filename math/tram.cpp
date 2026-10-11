//
// Created by FabioFernandez on 10/11/2026.
//

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int passengers = 0;
    int max_value = 0;
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        passengers = passengers - a + b;
        max_value = max(max_value, passengers);
    }

    cout << max_value ;

    return 0;
}
