#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a,b,x;
    cin >> a >> b >> x;
    cout << abs(a-b)/x + !(b%x) + !(a%x);
}