#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n1, n2, ret, temp;

int solution(int temp, vector<int> &v)
{
	int l = 0, r = v.size() - 1;
	int mid = 0;
	while (l <= r)
	{
		mid = (l + r) / 2;
		if (v[mid] > temp) r = mid - 1;
		else if (v[mid] == temp) return 1;
		else l = mid + 1;
	}
	return 0;
}

int main(void)
{
	ios::sync_with_stdio(false), cin.tie(0);
	int t;
	cin >> t;
	while (t--)
	{
        vector<int> v;
		cin >> n1; 
		for (int i = 0; i < n1; i++)
		{
			cin >> temp;
			v.push_back(temp);
		}
		sort(v.begin(), v.end());
		cin >> n2;
		for (int i = 0; i < n2; i++)
		{
			cin >> temp;
			cout << solution(temp, v) << "\n";
		}
	}
}