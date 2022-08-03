// Link : https://codeforces.com/problemset/problem/263/A

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int input, rowNumber, colNumber;
    for (int i = 1; i <= 5; i++) {
        for (int j=1; j <=5; j++) {
            cin >> input;
            if (input == 1) {
                rowNumber = i;
                colNumber = j;
            }
        }
    }
    cout << (abs(rowNumber - 3) + abs(colNumber - 3));
}