#include <iostream>

using namespace std;


void solution(int n, string s)
{
	string head, tail;
	int pos = s.find("*");
	head = s.substr(0, pos);
	tail = s.substr(pos + 1);
	for (int i = 0; i < n; i++)
	{
		string ns;
		cin >> ns;
		if (head.size() + tail.size() > ns.size()) cout << "NE\n";
		else 
		{
			if (head == ns.substr(0, head.size()) && tail == ns.substr(ns.size() - tail.size())) cout << "DA\n";
			else cout << "NE\n";
		}
	}
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(NULL);
	int n;
	string s;
	cin >> n >> s;
	solution(n, s);
}