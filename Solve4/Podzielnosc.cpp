#include <bits/stdc++.h>
using namespace std;

bool czy_podzielna(long long n)
{
	return n % 3 == 0 && n % 9 != 0;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long n;
	cin >> n;

	cout << czy_podzielna(n) << "\n";
	return 0;
}