#include <iostream>
#include <algorithm>
using namespace std;

int N;
long long dp[1515 + 1], way[1515 + 1];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> N;

	dp[1] = 0, dp[2] = 1, dp[3] = 1, dp[4] = 3;
	way[1] = 0, way[2] = 2, way[3] = 1, way[4] = 4;

	for (int i = 5; i <= N; i++)
	{

	}
}