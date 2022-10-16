#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,m;
    char sign;
    cin >> n >> sign >> m;
    if(sign == '=') {
        if(n == m) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    } else if(sign == '>') {
        if(n > m) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    } else if(sign == '<') {
        if(n < m) {
            cout << "Right" << endl;
        } else {
            cout << "Wrong" << endl;
        }
    }
}