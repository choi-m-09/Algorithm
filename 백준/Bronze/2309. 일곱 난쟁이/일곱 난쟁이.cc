#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Hobit[9];
int Sum = 0;
vector<int> v;
pair<int, int> Ret;

void solution()
{
	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (Sum - Hobit[i] - Hobit[j] == 100)
			{
				Ret = { i,j };
				return;
			}
		}
	}
}

int main(void)
{
	for (int i = 0; i < 9; i++)
	{
		cin >> Hobit[i];
		Sum += Hobit[i];
	}
	solution();
	for (int i = 0; i < 9; i++)
	{
		if (Ret.first == i || Ret.second == i) continue;
		v.push_back(Hobit[i]);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) cout << v[i] << '\n';
}