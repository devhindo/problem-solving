#include <bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int area = a*b;
    double newarea = (area) - (0.5)*(b-d)*(a-c);
    cout << fixed << setprecision(6) << newarea;
}