#include <bits/stdc++.h>
using namespace std;
int main() {
    double n,k,a;
    cin >> n >> k >> a;
    double res= (n*k) /a;
    double rem = modf(res, &res);
    if(rem) {
        cout << "double";
    } else if(res > INT_MAX) {
        cout << "long long";
    } else {
        cout << "int";
    }
}