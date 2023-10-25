#include <iostream>
#include <map>
#include <algorithm>

using namespace std;

int cnt[101];

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(NULL);

	int A, B, C, a, b;
	cin >> A >> B >> C;
	for (int i = 0; i < 3; i++)
	{
		int a, b;
		cin >> a >> b;
		for (int i = a; i < b; i++) cnt[i]++;
	}
	int Sum = 0;
	for (int i = 1; i < 100; i++)
	{
		if (cnt[i])
		{
			switch (cnt[i])
			{
			case 1:
				Sum += A;
				break;
			case 2:
				Sum += B * 2;
				break;
			case 3:
				Sum += C * 3;
				break;
			}
		}
	}
	cout << Sum;
}