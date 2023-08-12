#include <iostream>
#include <string>
#include <queue>

using namespace std;

void solution(int a, int b, int n)
{
	if (n == 1)
	{
		cout << a << ' ' << b << '\n';
		return;
	}

	solution(a, 6 - a - b, n - 1);
	cout << a << ' ' << b << '\n';
	solution(6 - a - b, b, n - 1);
}


int main(void)
{	
	cin.tie(0), ios::sync_with_stdio(0);
	int n;
	cin >> n;
	cout << (1 << n) - 1 << '\n';
	solution(1, 3, n);
	return 0;
}