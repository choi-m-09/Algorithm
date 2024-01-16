#include <iostream>

using namespace std;
int n, cnt;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0);
	
	cin >> n;

	while (n--)
	{
		bool check = true;
		string s;
		cin >> s;
		if (s.length() == 2)
		{
			cnt++;
			continue;
		}
		for (int i = 1; i < s.length(); i++)
		{
			if (s[i] != s[i - 1])
			{
				string comp = s.substr(i);
				for (int j = 0; j < comp.length(); j++)
				{
					if (s[i - 1] == comp[j])
					{
						check = false;
						break;
					}
				}
			}
			else continue;
		}
		if(check) cnt++;
	}
	cout << cnt;
    return 0;
}