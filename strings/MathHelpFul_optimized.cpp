//
// Created by Fabio on 09/09/2026.
//
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main() {
    string s,result="";
    cin >> s;
    int count1=0, count2=0, count3=0;
    for (char c : s) {
        if (c == '1') count1++;
        if (c == '2') count2++;
        if (c == '3') count3++;
    }
    for (int i = 0; i < count1; i++) result+= "1+";
    for (int i = 0; i < count2; i++) result+= "2+";
    for (int i = 0; i < count3; i++)result+= "3+";
    result.pop_back();
    cout << result << endl;
    return 0;
}
