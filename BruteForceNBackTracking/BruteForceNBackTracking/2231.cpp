#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	int n;	cin >> n;

	int com;
	for (int i = 1; i < n; i++)
	{
		com = i;
		int sum = i;
		while (com)
		{
			sum += (com % 10);
			com = com / 10;
		}
		if (sum == n)
		{
			cout << i;
			return 0;
		}
	}
	cout << 0;
}