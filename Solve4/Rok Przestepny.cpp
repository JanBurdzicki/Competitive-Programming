#include <bits/stdc++.h>
using namespace std;

bool czy_przestepny_rok(int n)
{
	if(n % 100 == 0 && n % 400 == 0)
	{
		return true;
	}

	if(n % 100 != 0 && n % 4 == 0)
	{
		return true;
	}

	return false;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;

	if(czy_przestepny_rok(n))
	{
		cout << "TAK\n";
	}

	else
	{
		cout << "NIE\n";
	}

	return 0;
}