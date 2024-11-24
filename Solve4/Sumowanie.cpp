#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	vector <int> liczby(n);

	for(int i = 0; i < n; i++)
	{
		cin >> liczby[i];
	}

	long long wynik = 0;

	for(auto& x : liczby)
	{
		wynik += x;
	}

	cout << wynik << "\n";
	return 0;
}