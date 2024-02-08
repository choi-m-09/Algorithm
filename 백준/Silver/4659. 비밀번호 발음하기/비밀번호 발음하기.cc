#include <iostream>
#include <vector>

using namespace std;
string s;

bool isVowel(int idx)
{
	return (idx == 'a' || idx == 'e' || idx == 'i' || idx == 'o' || idx == 'u');
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0);
	while (true)
	{
		cin >> s;
		int lcnt = 0, vcnt = 0;
		bool flag = 0;
		bool include = 0;
		if (s == "end") break;
		for (int i = 0; i < s.length(); i++)
		{
			int idx = s[i];
			if (isVowel(idx)) lcnt++, vcnt = 0, include = 1;
			else vcnt++, lcnt = 0;
			if (lcnt >= 3 || vcnt >= 3) flag = 1;
			if (i >= 1 && s[i - 1] == s[i] && (s[i] != 'e' && s[i] != 'o')) flag = 1;
		}
		if (!include) flag = 1;
		if (!flag) cout << '<' << s << '>' << " is acceptable." << endl;
		else cout << '<' << s << '>' << " is not acceptable." << endl;
	}
}