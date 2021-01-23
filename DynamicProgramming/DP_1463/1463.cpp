#include <iostream>
#include <algorithm>
using namespace std;

int n;
int dp[1000000 + 1];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> n;

	dp[1] = 0, dp[2] = 1, dp[3] = 1;
	for (int i = 4; i <= n; i++)
	{
		if (i % 2 == 0 && i % 3 == 0)
			dp[i] = min({ dp[i / 2], dp[i / 3], dp[i - 1] }) + 1;
		else if (i % 2 == 0)
			dp[i] = min(dp[i / 2], dp[i - 1]) + 1;
		else if (i % 3 == 0)
			dp[i] = min(dp[i / 3], dp[i - 1]) + 1;
		else
			dp[i] = dp[i - 1] + 1;
	}
	
	cout << dp[n];
}