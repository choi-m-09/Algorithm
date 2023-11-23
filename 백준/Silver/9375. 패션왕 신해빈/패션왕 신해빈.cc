#include <iostream>
#include <map>

using namespace std;


void solution(int t)
{
	while (t--)
	{
		map<string, int> Map;
		string a, b;
		int n;
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			cin >> a >> b;
			Map[b]++;
		}
		long long ret = 1;
		for (auto c : Map)
		{
			ret *= (long long)c.second + 1;
		}
		ret--;
		cout << ret << "\n";
	}
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(NULL);
	int t;
	cin >> t;
	solution(t);
}