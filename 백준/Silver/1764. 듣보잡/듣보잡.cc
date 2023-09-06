#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;
vector<string> Result;
map<string, bool> list;

void solution(int n, int m)
{
	int Count = 0;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		list.insert(make_pair(s, true));
	}
	for (int i = 0; i < m; i++)
	{
		string s;
		cin >> s;
		if (list[s])
		{
			Result.push_back(s);
			Count++;
		}
	}

	sort(Result.begin(), Result.end());
	cout << Count << '\n';
	for (int i = 0; i < Result.size(); i++)
	{
		cout << Result[i] << '\n';
	}
}

int main(void)
{
	cin.tie(0), ios::sync_with_stdio(0);
	int n, m;
	cin >> n >> m;
	solution(n, m);
}