#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;

	long long wynik = 1LL * a * a + 1LL * 4 * b * b + 1LL * 4 * a * b;

	cout << wynik << "\n";
	return 0;
}