#include <iostream>
#include <queue>

using namespace std;

int dy[4] = { 1,0,-1,0 };
int dx[4] = { 0,1,0,-1 };
int n, m, k, ret;
int map[51][51];
int visited[51][51];

void solution()
{

}

void bfs(int i, int j)
{
	queue<pair<int, int>> q;
	visited[i][j] = 1;
	q.push({ i,j });

	while (!q.empty())
	{
		pair<int, int> start = q.front(); q.pop();
		for (int i = 0; i < 4; i++)
		{
			int ny = start.first + dy[i];
			int nx = start.second + dx[i];

			if (ny < 0 || nx < 0 || ny >= n || nx >= m) continue;
			if (visited[ny][nx] || !map[ny][nx]) continue;

			visited[ny][nx] = 1;
			q.push({ ny, nx });
		}
	}
	ret++;
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(NULL);
	int t;
	cin >> t;
	while (t--)
	{
		ret = 0;
		fill(&map[0][0], &map[0][0] + 51 * 51, 0);
		fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
		cin >> m >> n >> k;
		for (int i = 0; i < k; i++)
		{
			pair<int, int> v;
			cin >> v.first >> v.second;
			map[v.second][v.first] = 1;
		}
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
			{
				if (map[i][j] && !visited[i][j])
				{
					bfs(i, j);
				}
			}
		cout << ret << '\n';
	}
}