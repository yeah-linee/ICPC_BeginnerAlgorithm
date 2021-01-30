#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	int n, m;
	cin >> n >> m;

	int pre_sum[1024 + 1][1024 + 1];
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cin >> pre_sum[i][j];
			pre_sum[i][j] = pre_sum[i][j - 1] + pre_sum[i - 1][j] - pre_sum[i - 1][j - 1] + pre_sum[i][j];
		}
	}

	while (m--)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;

		cout << pre_sum[x2][y2] - pre_sum[x1 - 1][y2] - pre_sum[x2][y1 - 1] + pre_sum[x1 - 1][y1 - 1] << '\n';
	}
}