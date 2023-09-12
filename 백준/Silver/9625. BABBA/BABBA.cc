#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int A[45];
int B[45];
void solution(int n)
{
	
	A[0] = 0;
	A[1] = 1;
	B[0] = 1;
	B[1] = 1;
	for (int i = 2; i < n; i++)
	{
		A[i] = B[i - 1];
		B[i] = A[i - 1] + B[i - 1];
	}
	cout << A[n - 1] << " " << B[n - 1];
}

int main(void)
{
	cin.tie(0), ios::sync_with_stdio(0);
	int k;
	cin >> k;
	solution(k);
}