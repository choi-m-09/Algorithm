#include <iostream>

using namespace std;
bool check[10002];

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0);
	
	int a = 0;

	for (int i = 1; i < 10001; i++)
	{
		int sum = 0;
		a = i;
		while (a != 0)
		{
			sum += a % 10;
			a /= 10;
		}
		

		if (i + sum < 10001)
		{
			check[i + sum] = true;
		}
	}
	for (int i = 1; i < 10001; i++)
		if (!check[i]) cout << i << '\n';
    return 0;
}