#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> Add;

void solution(vector<int> v1)
{	
	if (v1.size() == 2)
	{
		cout << v1[0] << v1[1];
		return;
	}
	vector<int> v2 = {};
	for (int i = 0; i < v1.size() - 1; i++)
	{
		v2.push_back((v1[i] + v1[i + 1]) % 10);
	}
	solution(v2);
}


int main(void)
{
	cin.tie(0), ios::sync_with_stdio(0);
	string n, n2;
	cin >> n >> n2;
	for (int i = 0; i < 8; i++)
	{
		Add.push_back(int(n[i]) - '0');
		Add.push_back(int(n2[i]) - '0');
	}
	solution(Add);
	return 0;

}