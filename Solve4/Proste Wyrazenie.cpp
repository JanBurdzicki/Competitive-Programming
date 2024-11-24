#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int x, y, z;
	cin >> x >> y >> z;

	long long wynik = (3 * x + 1LL * 7 * y * y) / (5 * z - (1LL * x * z % 2));

	cout << wynik << "\n";
	return 0;
}