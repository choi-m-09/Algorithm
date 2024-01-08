#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int n, m, k;
int map[101][101];
int visited[101][101];
int dy[4] = { 1,0,-1,0 };
int dx[4] = { 0,1,0,-1 };
int cnt;
vector<int> ret;

int dfs(int y, int x)
{
	visited[y][x] = 1;
	int ret = 1;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
		if (visited[ny][nx] || map[ny][nx]) continue;
		ret += dfs(ny, nx);
		
	}
	return ret;
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0);
	cin >> n >> m >> k;

	for (int i = 0; i < k; i++)
	{
		pair<int, int> spot1, spot2;
		cin >> spot1.first >> spot1.second >> spot2.first >> spot2.second;

		for (int x = spot1.first; x < spot2.first; x++)
		{
			for (int y = spot1.second; y < spot2.second; y++)
			{
				map[y][x] = 1;
			}
		}
	}

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
		{
			if (map[i][j] == 0 && !visited[i][j])
			{
				ret.push_back(dfs(i, j));
				cnt++;
			}
		}
	sort(ret.begin(), ret.end());
	cout << cnt << '\n';
	for (int _ret : ret)
	{
		cout << _ret << " ";
	}
}