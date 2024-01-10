#include <iostream>

using namespace std;
int n, m, j, ret;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0);
	cin >> n >> m >> j;
	
	int l = 1;
	int r = l + m - 1;
	

	while (j--)
	{
		int i;
		cin >> i;

		if (i >= l && i <= r) continue;
		else if (i < l)
		{
			ret += l - i;
			l -= l - i;
			r = l + m - 1;
			
		}
		else if(i > r)
		{
			ret += i - r;
			l += i - r;
			r = l + m - 1;
		}
	}

	cout << ret;
	return 0;
}