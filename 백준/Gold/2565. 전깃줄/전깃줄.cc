#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<pair<int,int>> Line;
int dp[101];

void solution(int n)
{
	int ans = 100;
	sort(Line.begin(), Line.end());
	dp[1] = 1;
	for (int i = 2; i <= n; i++)
	{
		for (int j = i - 1; j >= 0; j--)
		{
			if (Line[i].second > Line[j].second && dp[i] <= dp[j])
			{
				dp[i] = dp[j] + 1;
			}
		}
	}
	for (int i = 1; i <= n; i++) ans = min(ans, n - dp[i]);
	cout << ans;
}

int main(void)
{
	cin.tie(0), ios::sync_with_stdio(0);
	int n;
	cin >> n;
	Line.push_back({ 0, 0 });
	for (int i = 1; i <= n; i++)
	{
		int a, b;
		cin >> a >> b;
		Line.push_back({ a, b });
	}
	solution(n);
}