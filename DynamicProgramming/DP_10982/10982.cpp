#include <iostream>
#include <algorithm>
using namespace std;
using ll = long long;

ll t, n, a, b, c, sum;
ll dp[100500];
ll inf = 1e18;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);
	cin >> t;
	while (t--)
	{
		cin >> n;
		fill(dp, dp + 100500, inf);
		dp[0] = 0;

		while (n--) {
			cin >> a >> b;

			for (int i = 100000; i >= 0; i--)
			{
				if (i >= a)
					dp[i] = min(dp[i] + b, dp[i - a]);
				else
					dp[i] += b;
			}
		}

		c = inf;
		for (ll i = 0; i < 100001; i++)
			c = min(c, max(dp[i], i));

		cout << c << '\n';
	}
}