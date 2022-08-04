#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=n; i >= 1; i--) {
        if(i==1) {
            cout << i;
            break;
        }
        cout << i << " ";
    }
}