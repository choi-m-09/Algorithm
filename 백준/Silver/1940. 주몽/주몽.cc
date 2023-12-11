#include <iostream>

using namespace std;
int id[15001];
int cnt = 0;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> id[i];
	
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (id[i] + id[j] == m) cnt++;
		}
	}
	cout << cnt;
}