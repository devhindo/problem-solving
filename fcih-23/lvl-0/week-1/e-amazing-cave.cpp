#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    if(x % 10 == 7 || x % 10 == 4) {
        cout << "lucky ";
    } else {
        cout << "unlucky ";
    }
    if(x % 2 == 0) {
        cout << "even";
    } else {
        cout << "odd";
    }
}