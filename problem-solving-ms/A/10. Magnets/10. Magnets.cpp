// Link : https://codeforces.com/contest/344/problem/A

#include <iostream>
 
int main()
{
	int n, fractions=0;
	std::string left, right;
	std::cin >> n;
	std::cin >> left;
	for (int i = 1; i < n; i++) {
		std::cin >> right;
		if (left[1] == right[0]) {
			fractions = fractions + 1;
		}
		left = right;
	}
	std::cout << (fractions + 1);
}