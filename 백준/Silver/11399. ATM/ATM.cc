#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
vector<int> P;
int DP[1001];
void solution(int n)
{
	DP[0] = P[0];
	int ans = 0;
	for (int i = 1; i < n; i++)
	{
		DP[i] = DP[i - 1] + P[i];

	}
	for (int i = 0; i < n; i++)
	{
		ans += DP[i];
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
		int k;
		cin >> k;
		P.push_back(k);
	}
	sort(P.begin(), P.end());
	solution(n);
}