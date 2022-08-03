// Link : https://codeforces.com/problemset/problem/427/A

#include <iostream>

using namespace std;

int main() {
    int numOfEvents, untreatedCrimes=0,  availableRecruiters = 0;
    cin >> numOfEvents;
    for (int i = 0; i < numOfEvents; i++) {
        int event;
        cin >> event;
        if (event == -1) {
            if (availableRecruiters > 0) {
                availableRecruiters = availableRecruiters - 1;
            } else {
                untreatedCrimes = untreatedCrimes + 1;
            }  
        } else {
            availableRecruiters = availableRecruiters + event;
        }
    }
    cout << untreatedCrimes;
}