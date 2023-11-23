#include <iostream>
#include <map>

using namespace std;

int cnt[100];
char mid;
void solution()
{
	string ret;
	int flag = 0;
	for (int i = 'Z'; i >='A'; i--)
	{
		if (cnt[i] > 0)
		{
			if (cnt[i] % 2 == 1)
			{
				mid = (char)i;
				flag++;
				cnt[i]--;
			}
			if (flag == 2) break;
			for (int j = 0; j < cnt[i]; j += 2)
			{
				ret = (char)i + ret;
				ret += (char)i;
			}
		}
	}
	if (mid) ret.insert(ret.begin() + ret.size() / 2, mid);
	if (flag == 2) cout << "I'm Sorry Hansoo";
	else cout << ret;
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(NULL);
	string s;
	cin >> s;
	for (auto c : s) cnt[c]++;
	solution();
}