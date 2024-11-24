#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b;
	cin >> a >> b;

	int wynik = a * b * b - 3 * a;

	cout << wynik << "\n";
	return 0;
}