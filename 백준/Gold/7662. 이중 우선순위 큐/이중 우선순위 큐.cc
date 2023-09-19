#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main(void)
{
	cin.tie(0), ios::sync_with_stdio(0);
	int t;
	cin >> t;
	while (t--)
	{
		int k;
		cin >> k;
		multiset<int> tree;
		while (k--)
		{
			char com;
			cin >> com;
			
			if (com == 'D')
			{
				int n;
				cin >> n;
				if (tree.empty()) continue;
				if (n == 1)	tree.erase(prev(tree.end()));
				else tree.erase(tree.begin());
			}
			else if(com == 'I')
			{
				int i;
				cin >> i;
				tree.insert(i);
			}
		}
		if (tree.empty()) cout << "EMPTY\n";
		else
		{
			cout << *prev(tree.end()) << " " << *tree.begin() << '\n';
		}
	}

	
}