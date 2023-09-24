#include <iostream>
#include <vector>
#include <set>

#define ll long long

using namespace std;

ll DP[81];

void solution(int n)
{
	DP[1] = 1;
	DP[2] = 1;

	for (int i = 3; i <= n; i++)
	{
		DP[i] = DP[i - 1] + DP[i - 2];
	}
	if (n == 1) 
    {
        cout << 4;
        return;
    }
	cout << (DP[n] + (DP[n] + DP[n - 1])) * 2;

}

int main(void)
{
	cin.tie(0), ios::sync_with_stdio(0);
	
	int n;
	cin >> n;
	solution(n);
}