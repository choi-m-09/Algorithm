#include <iostream>

using namespace std;

int n, m;
int a[1000001], b[1000001], ret[1000001];

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0);
	cin >> n >> m;

	for (int i = 0; i < n; i++)	cin >> a[i];	
	for (int i = 0; i < m; i++) cin >> b[i];

	int aidx = 0, bidx = 0;
	
	for (int i = 0; i < n + m; i++)
	{
		if (bidx == m) ret[i] = a[aidx++];
		else if (aidx == n) ret[i] = b[bidx++];
		else if (a[aidx] <= b[bidx]) ret[i] = a[aidx++];
		else ret[i] = b[bidx++];
	}
	for (int i = 0; i < n + m; i++) cout << ret[i] << " ";
	
}