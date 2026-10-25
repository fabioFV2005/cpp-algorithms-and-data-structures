//
// Created by FabioFernandez on 10/18/2026.
//

#include <iostream>
using namespace std;

int main() {
    int n, t;
    string queue;
    cin >> n >> t;
    cin >> queue;
    while (t--) {

        for (int i = 0; i <= queue.length(); i++) {
            if (queue[i] == 'B' && queue[i+1] == 'G') {
                queue[i] = 'G';
                queue[i+1] = 'B';
                i++;
            }
        }
    }
    cout << queue << endl;

    return 0;
}
