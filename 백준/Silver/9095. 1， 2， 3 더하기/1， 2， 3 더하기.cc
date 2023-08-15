#include <iostream>

using namespace std;

int D[10];
void Calc()
{	//D[6] div 3 : D[2] + 1;
	//	   div 2 : D[3] + 1;
	//	   -1: D[5] + 1;
	D[1] = 1;
	D[2] = 2;
	D[3] = 4;
	for (int i = 4; i <= 11; i++)
	{
		D[i] = D[i - 1] + D[i - 2] + D[i - 3];
	}

}


int main(void)
{
	cin.tie(0), ios::sync_with_stdio(0);
	Calc();
	int n;
	cin >> n;
	while (n--)
	{
		int k;
		cin >> k;
		cout << D[k] << "\n";
	}
}