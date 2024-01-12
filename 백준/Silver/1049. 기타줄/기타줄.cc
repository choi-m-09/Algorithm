#include <iostream>

using namespace std;
int n, m;
int pack = 1000, one = 1000, sup = 0;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0);
	cin >> n >> m;
	int i, j;
	while (m--)
	{
		cin >> i >> j;
		pack = min(i, pack);
		one = min(j, one);
	}
	sup = (n / 6 * pack) + (n % 6 * one);
	
	if (n % 6 == 0) pack *= n / 6;
	else pack *= n / 6 + 1;
	
	one *= n;
	
	int comp = min(pack, one);
	
	cout << min(comp, sup);
}