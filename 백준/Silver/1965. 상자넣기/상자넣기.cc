#include <iostream>

using namespace std;

int dp[1001];
int Box[1001];
void solution(int n)
{
	int max = 0;
	for (int i = 1; i <= n; i++)
	{
		dp[i] = 1;
		for (int j = 1; j < i; j++)
		{
			if (Box[j] < Box[i] && dp[i] < dp[j] + 1)
			{
				dp[i] = dp[j] + 1;
			}
		}
		if (max < dp[i]) max = dp[i];
	}
	cout << max;

}

int main(void)
{
	cin.tie(0), ios::sync_with_stdio(0);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> Box[i];
	solution(n);
	
}