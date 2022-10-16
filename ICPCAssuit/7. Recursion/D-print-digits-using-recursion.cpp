#include <bits/stdc++.h>
using namespace std;

void PrintDigits(int n) { // 39 -- 3
    int result = n / 10; // 3 -- 0
    int remain = n % 10; // 9 -- 3
    if(!result) {
        cout << remain;
    } else {

        PrintDigits(result);
        cout << " " << remain;
    }
}

int main() {
    int t,n;
    cin >> t;
    for(int i=0; i<t; i++) {
        cin >> n;
        PrintDigits(n);
        cout << endl;
    }
}