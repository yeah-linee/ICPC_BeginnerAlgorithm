#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	int n, m;
	cin >> n >> m;

	int pre_sum[100000 + 1];
	for (int i = 1; i <= n; i++)
	{
		cin >> pre_sum[i];
		pre_sum[i] += pre_sum[i - 1];
	}

	while (m--)
	{
		int i, j;
		cin >> i >> j;

		cout << pre_sum[j] - pre_sum[i - 1] << '\n';
	}
}