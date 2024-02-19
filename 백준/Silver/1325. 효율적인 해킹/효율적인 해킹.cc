#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

int n, m, mx, a, b;
vector<int> v[10001];
int visited[10001];
int dp[10001];

int dfs(int i)
{
	visited[i] = 1;
	int ret = 1;
	for (int k : v[i])
	{
		if (visited[k]) continue;
		ret += dfs(k);
	}
	return ret;
}

int main()
{
	cin >> n >> m;
	while (m--)
	{
		cin >> a >> b;
		v[b].push_back(a);
	}

	for (int i = 1; i <= n; i++)
	{
		memset(visited, 0, sizeof(visited));
		dp[i] = dfs(i);
		mx = max(mx, dp[i]);
	}

	for (int i = 1; i <= n; i++) if (mx == dp[i]) cout << i << " ";
	return 0;
}