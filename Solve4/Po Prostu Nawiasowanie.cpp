#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	string s;
	cin >> n >> s;

	bool ok = true;

	int balans = 0;

	for(int i = 0; i < n; i++)
	{
		if(s[i] == '(')
		{
			balans++;
		}

		// if(s[i] == ')')
		else
		{
			balans--;
		}

		if(balans < 0)
		{
			ok = false;

			break;
		}

		// cerr << "D: " << balans << "\n";
	}

	if(balans != 0)
	{
		ok = false;
	}

	if(ok)
	{
		cout << "TAK\n";
	}

	else
	{
		cout << "NIE\n";
	}

	return 0;
}