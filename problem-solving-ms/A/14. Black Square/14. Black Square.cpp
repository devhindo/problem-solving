// Link : https://codeforces.com/contest/431/problem/A

#include <iostream>
#include <string>

using namespace std;

int main() {
    int a1,a2,a3,a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    int calories = 0;
    for (int i=0; i < s.length(); i++) {
        if (s[i] == '1') {
            calories = calories + a1;
        }
        if (s[i] == '2') {
            calories = calories + a2;
        }
        if (s[i] == '3') {
            calories = calories + a3;
        }
        if (s[i] == '4') {
            calories = calories + a4;
        }
    }
    cout << calories;
}
