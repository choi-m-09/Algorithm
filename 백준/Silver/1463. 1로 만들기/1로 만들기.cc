#include <iostream>

using namespace std;

int D[1000000];
void solution(int n)
{	//D[6] div 3 : D[2] + 1;
	//	   div 2 : D[3] + 1;
	//	   -1: D[5] + 1;
	D[1] = 0;
	for (int i = 2; i <= n; i++)
	{
		D[i] = D[i - 1] + 1;
		if (i % 3 == 0)	D[i] = min(D[i], D[i / 3] + 1);
		if (i % 2 == 0) D[i] = min(D[i], D[i / 2] + 1);
	}
	cout << D[n];

}


int main(void)
{
	cin.tie(0), ios::sync_with_stdio(0);
	int n;
	cin >> n;
	solution(n);
}