#include <iostream>

using namespace std;

int a[11];

int solution(int n, int k)
{	
	int ans = 0;
	for (int i = n - 1; i >= 0; i--)
	{
		while (k - a[i] >= 0)
		{
			ans++;
			k -= a[i];
		}
	}
	return ans;
}


int main(void)
{
	cin.tie(0), ios::sync_with_stdio(0);
	int n, k;
	cin >> n >> k;
	for (int i = 0; i < n; i++) cin >> a[i];
	cout << solution(n, k);
}