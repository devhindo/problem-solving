// Link : https://codeforces.com/contest/731/problem/A

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {
    string name;
    cin >> name;
    char alphapets[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
    int currentIndex = 0, steps = 0, rightApproach, leftApproach,desiredIndex;
    for(int i=0; i < name.length(); i++) {
        desiredIndex = find(alphapets, alphapets + 26, name[i]) - alphapets; // 25 => 4
        if (desiredIndex > currentIndex) {
            rightApproach = desiredIndex - currentIndex;
            leftApproach = (currentIndex - desiredIndex) + 26;
            if (rightApproach > leftApproach) {
                steps = steps + leftApproach;
            } else {
                steps = steps + rightApproach;
            }
        } else if (currentIndex > desiredIndex) { // 25 => 1
            rightApproach = (desiredIndex - currentIndex) + 26; // 25
            leftApproach = currentIndex - desiredIndex;
            if (rightApproach > leftApproach) {
                steps = steps + leftApproach;
            } else {
                steps = steps + rightApproach;
            }
        } else { continue; }
        currentIndex = desiredIndex;
    }
    cout << steps;
}
