
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, values, sum=0, i =0;
    cin >> n;
    while (i < n) {
        cin >> values;
        sum += values;
        i++;
    }
    double result = (double) sum / (double) n;
    cout << fixed << setprecision(12) << result << endl;

    return 0;
}
