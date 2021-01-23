#include <iostream>
#include <algorithm>
using namespace std;

int dp[10005][505][2];	// dp[x][y][z]: x�ʿ� y�� ��ħ������ ������ z�� �ٰ� �ִ����� ��Ÿ�� ��, �޸� �Ÿ��� �ִ�
int n, m, arr[10001];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> n >> m;
	for (int i = 1; i <= n; i++)
		cin >> arr[i];

	for (int i = 1; i <= n; i++)
		for (int j = 0; j <= m; j++)
		{
			if (j != 1)
			{
				// j�� 0�̶�� dp[i-1][j-1]�� �������� ����
				if (j)
				{
					dp[i][j][1] = dp[i - 1][j - 1][1] + arr[i];
					dp[i][j][0] = max(dp[i - 1][j + 1][1], dp[i - 1][j + 1][0]);
				}
				else
				{
					// j�� 0�̸鼭 �޸��� ���� ����
					dp[i][j][0] = max({ dp[i - 1][j + 1][0], dp[i - 1][j + 1][1], dp[i - 1][j][0] });
					// j�� 0�� �� ���� ��� j�� 0��. 
				}
			}
			else
			{
				dp[i][j][1] = max(dp[i - 1][j - 1][1], dp[i - 1][j - 1][0] + arr[i]);
				dp[i][j][0] = max(dp[i - 1][j + 1][1], dp[i - 1][j + 1][0]);
			}
		}

	cout << dp[n][0][0];
}