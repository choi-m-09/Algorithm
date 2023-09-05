#include <iostream>
#include <vector>

using namespace std;
vector<int> Com[101];
bool Check[101];
int cnt = 0;

void solution(int n, int Last_Com)
{
	Check[n] = true;
	for (int i = 0; i < Com[n].size(); i++)
	{
		int x = Com[n][i];
		if (!Check[x])
		{
			solution(x, Last_Com);
			cnt++;
		}
	}
}

int main(void)
{
	cin.tie(0), ios::sync_with_stdio(0);
	int n, s, c1, c2;
	cin >> n >> s;
	for (int i = 0; i < s; i++)
	{
		cin >> c1 >> c2;
		Com[c1].push_back(c2);
		Com[c2].push_back(c1);
	}
	solution(1, n);
	cout << cnt;
	return 0;
}