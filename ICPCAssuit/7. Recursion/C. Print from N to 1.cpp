#include <bits/stdc++.h>

using namespace std;

void PrintReverseOrder(int N) {
    if(N<=1) {
        cout << N;
        return;
    } else {
        cout << N << " ";
        PrintReverseOrder(N -1);
    }

}

int main() {
    int n;
    cin >> n;
    PrintReverseOrder(n);
}