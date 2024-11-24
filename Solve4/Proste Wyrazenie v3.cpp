#include <bits/stdc++.h>
using namespace std;

long long policz(long long a, long long b, string operacja)
{
	if(operacja == "+") return a + b;
	if(operacja == "-") return a - b;
	if(operacja == "*") return a * b;
	if(operacja == "/") return a / b;
	return -1;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int a, b, c;
	string s1, s2;
	cin >> a >> s1 >> b >> s2 >> c;

	long long wynik;

	if((s1 == "+" || s1 == "-") && (s2 == "*" || s2 == "/"))
	{
		wynik = policz(a, policz(b, c, s2), s1);
	}

	else
	{
		wynik = policz(policz(a, b, s1), c, s2);
	}

	cout << wynik << "\n";
	return 0;
}