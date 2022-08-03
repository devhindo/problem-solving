// Link : https://codeforces.com/contest/731/problem/A

#include <iostream>

using namespace std;

int main() { // 117 3 => 9 || 15 2 => 2 || 237 7 || 1
// 9*117 = 1053;
 int itemPrice, change, numOfItems = 0, totalPrice;
 cin >> itemPrice >> change;
do
{
    numOfItems++;   
    totalPrice = itemPrice * numOfItems;
} while (((totalPrice - change) % 10 != 0) && ((numOfItems*itemPrice) % 10 != 0));
    cout << numOfItems;
}