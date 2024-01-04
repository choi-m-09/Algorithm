#include <iostream>
#include <vector>

using namespace std;
int n, ret;
int map[101][101], visited[101][101];
int dy[4] = { 0,1,0,-1 };
int dx[4] = { 1,0,-1,0 };

void solution()
{

}

void dfs(int y, int x, int d)
{
	visited[y][x] = 1;
	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];
		if (ny < 0 || nx < 0 || ny >= n || nx >= n) continue;
		if(!visited[ny][nx] && map[ny][nx] > d) dfs(ny, nx, d);
	}
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(NULL);
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) cin >> map[i][j];

	for (int d = 0; d < 101; d++)
	{
		fill(&visited[0][0], &visited[0][0] + 101 * 101, 0);
		int cnt = 0;
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
			{
				if (map[i][j] > d && !visited[i][j])
				{
					dfs(i, j, d);
					cnt++;
				}
			}
		ret = max(ret, cnt);
	}
	cout << ret << '\n';
}