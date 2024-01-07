#include <iostream>
#include <vector>

using namespace std;
int n, m, answer = 987654321;
int map[51][51];

vector<vector<int>> chickenCombi;
vector<pair<int, int>> house, chicken;

void combi(int start, vector<int> v)
{
	if (v.size() == m)
	{
		chickenCombi.push_back(v);
		return;
	}

	for (int i = start + 1; i < chicken.size(); i++)
	{
		v.push_back(i);
		combi(i, v);
		v.pop_back();
	}
}

int main(void)
{
	cin >> n >> m;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 1) house.push_back({ i,j });
			if (map[i][j] == 2) chicken.push_back({ i,j });
		}
	}
	vector<int> v;
	combi(-1, v);

	for (int i = 0; i < chickenCombi.size(); i++)
	{
		int ret = 0;
		for (int j = 0; j < house.size(); j++)
		{

			int _min = 100000000;
			for (int k = 0; k < m; k++)
			{
				int comp = abs(house[j].first - chicken[chickenCombi[i][k]].first) + abs(house[j].second - chicken[chickenCombi[i][k]].second);
				_min = min(_min, comp);
			}
			ret += _min;
		}
		answer = min(answer, ret);
	}
	cout << answer << endl;
}