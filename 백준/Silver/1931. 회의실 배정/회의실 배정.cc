#include <iostream>
#include <algorithm>

using namespace std;

int a[11];
pair<int, int> p[1000001];
int solution(int n)
{
	int ans = 0;
	int t = 0;
	for (int i = 0; i < n; i++)
	{
		if (t > p[i].second) continue;
		ans++;
		t = p[i].first;
	}
	return ans;
}


int main(void)
{
	cin.tie(0), ios::sync_with_stdio(0);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) cin >> p[i].second >> p[i].first;
	sort(p, p + n);
	cout << solution(n);
}