#include <iostream>

using namespace std;

long long solution(long long a, long long b, long long c)
{
	if (b == 1) return a % c;
	long long val = solution(a, b / 2, c);
	val = val * val % c;
	if (b % 2 == 0) return val;
	return val * a % c;

}


int main(void)
{	
	cin.tie(0), ios::sync_with_stdio(0);
	long long a, b, c;
	cin >> a >> b >> c;
	cout << solution(a, b, c);
	return 0;
}