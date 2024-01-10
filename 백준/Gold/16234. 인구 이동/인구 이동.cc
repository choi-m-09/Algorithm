#include <iostream>
#include <vector>

using namespace std;
int n, l, r, day, sum;
int map[51][51];
int visited[51][51];
int dy[4] = { 1,0,-1,0 };
int dx[4] = { 0,1,0,-1 };
vector <pair<int, int>> v;

void dfs(int y, int x)
{
	visited[y][x] = 1;

	for (int i = 0; i < 4; i++)
	{
		int ny = y + dy[i];
		int nx = x + dx[i];

		if (ny < 0 || nx < 0 || ny >= n || nx >= n || visited[ny][nx]) continue;
		if (abs(map[y][x] - map[ny][nx]) >= l && abs(map[y][x] - map[ny][nx]) <= r)
		{
			sum += map[ny][nx];
			v.push_back({ ny,nx });
			dfs(ny, nx);
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0);
	cin >> n >> l >> r;
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) cin >> map[i][j];
	
	while (1)
	{
		bool flag = 0;
		sum = 0;
		fill(&visited[0][0], &visited[0][0] + 51 * 51, 0);
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++)
			{
				if (!visited[i][j])
				{
					v.clear();
					sum = map[i][j];
					v.push_back({ i,j });
					dfs(i, j);
					if (v.size() == 1) continue;
					for (pair<int, int> b : v)
					{
						map[b.first][b.second] = sum / v.size();
						flag = 1;
					}
				}
			}
		if (!flag) break;
		day++;
	}
	cout << day;
    return 0;
}