#include <iostream>
#include <iomanip>
using namespace std;


int main() {
    int n, k, count = 0;
    cin >> n >> k;
    int participants[n];
    for (int i = 0; i < n; i++) {
        cin >> participants[i];
    }
    int score = participants[k-1];
    for (int i = 0; i < n; i++) {
        if (participants[i] < 1) continue;
        if (participants[i] >= score) count++;
    }
    cout << count << endl;
    return 0;
}
