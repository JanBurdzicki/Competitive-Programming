#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	// 1 -> 9^2 -> 81
	// 2 -> 99^2 -> 9801
	// 3 -> 999^2 -> 998001
	// 4 -> 9999^2 -> 99980001

	// n -> 9...9^2 (n razy 9) -> 9...9 (n-1 razy 9) 8 0...0 (n-1 razy 0) 1
	string s = string(n - 1, '9') + "8" + string(n - 1, '0') + "1";

	cout << s << "\n";
	return 0;
}