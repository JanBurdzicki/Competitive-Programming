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

	for(auto& x : liczby)
	{
		if(x > 7)
		{
			cout << "TAK\n";
		}

		else
		{
			cout << "NIE\n";
		}
	}

	return 0;
}