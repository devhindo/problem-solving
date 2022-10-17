#include <bits/stdc++.h>
using namespace std;
int main() { // 1 2     3 1 yes
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    pair<int,int>x = {x1,y1};
    pair<int,int>y = {x2,y2};
    if(x == y) {
        cout << "Yes";
    } else if(x.first+2 == y.first) {
        if(x.second+1 == y.second || x.second-1 == y.second) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    } else if(x.second+2 == y.second) {
        if(x.first+1 == y.first || x.first-1 == y.first) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    } else if(x.second-2 == y.second) {
        if(x.first+1 == y.first || x.first-1 == y.first) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    } else if(x.first-2 == y.first) {
        if(x.second+1 == y.second || x.second-1 == y.second) {
            cout << "Yes";
        } else {
            cout << "No";
        }
    } else {
        cout << "No";
    }
}