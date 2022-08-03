// Link : https://codeforces.com/problemset/problem/791/A

#include <iostream>

using namespace std;

int main() {
    int LimakWeight, BobWeight, numOfYears = 0;
    cin >> LimakWeight >> BobWeight;
    do {
        LimakWeight = LimakWeight * 3; // 4*3 = 12 -> 12*3 = 36 -> 36*3 = 108
        BobWeight = BobWeight * 2; // 9*2 = 18 -> 18*2 = 36 -> 36*2 = 72
        numOfYears = numOfYears + 1;
    } while (LimakWeight <= BobWeight);
    cout << numOfYears;
}