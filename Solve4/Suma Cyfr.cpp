#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;

	int wynik = 0;

	for(auto& x : s)
	{
		wynik += x - '0';
	}

	cout << wynik << "\n";
	return 0;
}