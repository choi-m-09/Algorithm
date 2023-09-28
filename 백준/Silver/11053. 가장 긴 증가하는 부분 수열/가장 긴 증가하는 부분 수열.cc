#include <iostream>

using namespace std;

int dp[1001];
int num[1001];
void solution(int n)
{
	int ans = 0;
	
	for (int i = 0; i < n; i++)
	{
		dp[i] = 1;
		for (int j = 0; j < i; j++)
		{
			if (num[j] < num[i] && dp[i] < dp[j] + 1)
			{
				dp[i] = dp[j] + 1;
			}
		}
		if (ans < dp[i]) ans = dp[i];
	}
	cout << ans;
}

int main(void)
{
	cin.tie(0), ios::sync_with_stdio(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}
	solution(n);
}