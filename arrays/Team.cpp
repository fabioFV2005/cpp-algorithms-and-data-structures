//
// Created by Fabio on 05/09/2026.
//
#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;


int main() {
    int n, count=0;
    cin>>n;
    while(n--) {
        int friends[3]={0};
        cin >> friends[0] >> friends[1] >> friends[2];
        if (friends[0]+friends[1]+friends[2] > 1) {
            count++;
        }
    }
    cout << count<<endl;
    return 0;
}
