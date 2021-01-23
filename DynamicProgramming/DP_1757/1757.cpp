#include <iostream>
#include <algorithm>
using namespace std;

int dp[10005][505][2];	// dp[x][y][z]: x초에 y의 지침지수를 가지고 z는 뛰고 있는지를 나타낼 때, 달린 거리의 최댓값
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
				// j가 0이라면 dp[i-1][j-1]에 접근하지 못함
				if (j)
				{
					dp[i][j][1] = dp[i - 1][j - 1][1] + arr[i];
					dp[i][j][0] = max(dp[i - 1][j + 1][1], dp[i - 1][j + 1][0]);
				}
				else
				{
					// j가 0이면서 달리는 경우는 없음
					dp[i][j][0] = max({ dp[i - 1][j + 1][0], dp[i - 1][j + 1][1], dp[i - 1][j][0] });
					// j가 0일 때 쉬면 계속 j가 0임. 
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