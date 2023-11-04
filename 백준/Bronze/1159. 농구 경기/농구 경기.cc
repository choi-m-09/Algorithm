#include <iostream>
#include <string>

using namespace std;

int N, cnt[26];

void solution()
{
	string ret;
	for (int i = 0; i < 26; i++) if (cnt[i] >= 5) ret += (i + 'a');
	if (ret.size()) cout << ret;
	else cout << "PREDAJA";
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(NULL);
	cin >> N;
	for(int i = 0; i < N; i++)
	{
		string s;
		cin >> s;
		cnt[s[0] - 'a']++;
	}
	solution();
}