#include <iostream>

using namespace std;

int cnt = 0;

int solution(int n)
{	
	int Coin[6] = { 500,100,50,10,5,1 };
	while (n > 0)
	{
		for (int i = 0; i < 6; i++)
		{
			if (n == 0) break;

			else if (n >= Coin[i])
			{
				n -= Coin[i];
				cnt++;
				break;
			}
		}
	}
	return cnt;
}


int main(void)
{
	cin.tie(0), ios::sync_with_stdio(0);
	int n;
	cin >> n;
	cout << solution(1000 - n);
}