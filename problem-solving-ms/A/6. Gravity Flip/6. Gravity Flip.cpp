// Link : https://codeforces.com/contest/405/problem/A

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> cols;
    int numOfCols;
    cin >> numOfCols;
    for (int i = 0; i < numOfCols; i++) {
        int input;
        cin >> input;
        cols.push_back(input);
    }
    sort(cols.begin(), cols.end());
    for (int j =0; j < numOfCols; j++) {
        cout << cols.at(j) << " ";
    }
}