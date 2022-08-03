// Link : https://codeforces.com/problemset/problem/677/A

#include <iostream>

using namespace std;
int main() {
    int n ,h , sample ,counter=0;
    cin >> n >> h;
    for (int i=0; i < n; i++) {
        cin >> sample;
        if (sample <= h) {
            counter = counter + 1;
        } else {
            counter = counter + 2;
        }
    }
    cout << counter;
    return 0;
}
