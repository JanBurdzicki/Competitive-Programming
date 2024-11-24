#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	string s = "";

	int indeks = 0;

	while(n)
	{
		if(indeks % 2 == 1)
		{
			s += n % 10 + '0';
		}

		n /= 10;
		indeks++;
	}

	reverse(s.begin(), s.end());

	int wynik = 0;

	if((int) s.size() > 0)
	{
		wynik = stoi(s);
	}

	cout << wynik << "\n";
	return 0;
}