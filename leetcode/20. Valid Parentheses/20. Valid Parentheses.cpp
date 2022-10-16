// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>
bool isPowerOfTwo(int n) {
    int result = 0;
    while (pow(2, result) <= n) {
        if (pow == n) {
            return true;
        }
        result = pow(2, result + 1);
    }
    return false;
}

using namespace std;
int main() {
    // Write C++ code here
    cout << isPowerOfTwo(1);
}