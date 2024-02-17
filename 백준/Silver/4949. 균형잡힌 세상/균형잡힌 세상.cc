#include <iostream>
#include <string>
#include <vector>
#include <stack>

using namespace std;

void solution()
{
	while (1)
	{
		string s;
		getline(cin, s);
		if (s == ".") break;
		stack<char> Stack;
		bool inValid = true;
		for (auto c : s)
		{
			if (c == '(' || c == '[') Stack.push(c);
			else if (c == ')')
			{
				if (Stack.empty() || Stack.top() != '(')
				{
					inValid = false;
					break;
				}
				Stack.pop();
			}
			else if (c == ']')
			{
				if (Stack.empty() || Stack.top() != '[')
				{
					inValid = false;
					break;
				}
				Stack.pop();
			}
		}
		if (!Stack.empty()) inValid = false;
		if (inValid) cout << "yes\n";
		else cout << "no\n";
	}
}


int main(void)
{
	cin.tie(NULL), ios::sync_with_stdio(false);
	solution();
	
}