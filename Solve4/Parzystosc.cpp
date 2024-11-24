#include <bits/stdc++.h>
using namespace std;

bool czy_parzysta(int n)
{
	return n % 2 == 0;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	cout << czy_parzysta(n) << "\n";
	return 0;
}