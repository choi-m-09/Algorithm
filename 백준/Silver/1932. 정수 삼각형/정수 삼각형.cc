#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int DP[500][500];
void solution(int n)
{
	for (int i = n - 1; i >= 1; i--)
	{
		for (int j = 0; j < i; j++)
		{
			DP[i - 1][j] += max(DP[i][j], DP[i][j + 1]);
		}
	}
	cout << DP[0][0];
}

int main(void)
{
	cin.tie(0), ios::sync_with_stdio(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cin >> DP[i][j];
		}
	}
	solution(n);
}