#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	long long wynik = 0;

	while(true)
	{
		int n;
		cin >> n;

		if(n == 0)
		{
			break;
		}

		else
		{
			wynik += n;
		}
	}

	cout << wynik << "\n";
	return 0;
}