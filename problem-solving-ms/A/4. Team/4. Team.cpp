// link : https://codeforces.com/problemset/problem/231/A


#include <iostream>
 
using namespace std;
 
 
int main()
{
	int n, numOfSolvedProblems=0;
	cin >> n;
	int P, V, T, sum;
	for (int i = 1; i <= n; i++) {
		cin >> P >> V >> T;
		sum = P + V + T;
		if (sum >= 2) {
			numOfSolvedProblems += 1;
		}
	}
	cout << numOfSolvedProblems;
}