#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	string s;
	cin >> s;

	map <string, string> mapka;

	mapka["styczen"] = "I";
	mapka["luty"] = "II";
	mapka["marzec"] = "III";
	mapka["kwiecien"] = "IV";
	mapka["maj"] = "V";
	mapka["czerwiec"] = "VI";
	mapka["lipiec"] = "VII";
	mapka["sierpien"] = "VIII";
	mapka["wrzesien"] = "IX";
	mapka["pazdziernik"] = "X";
	mapka["listopad"] = "XI";
	mapka["grudzien"] = "XII";

	cout << mapka[s] << "\n";

	return 0;
}