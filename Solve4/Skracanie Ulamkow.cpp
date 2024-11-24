#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long licznik, mianownik;
	cin >> licznik >> mianownik;

	long long gcd = __gcd(licznik, mianownik);

	cout << licznik / gcd << " " << mianownik / gcd << "\n";
	return 0;
}