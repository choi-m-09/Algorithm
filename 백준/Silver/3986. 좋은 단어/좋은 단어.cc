#include <iostream>
#include <stack>

using namespace std;
int cnt = 0;

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s.length() % 2 == 1) continue;
		stack<char> stk;

		for (auto a : s)
		{
			if (stk.size() > 0 && stk.top() == a) stk.pop();
			else stk.push(a);
		}
		if (stk.empty()) cnt++;
	}
	cout << cnt;
}