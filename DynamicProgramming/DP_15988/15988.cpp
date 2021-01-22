#include <iostream>
using namespace std;

long long way_to_sum[1000000 + 1];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	way_to_sum[1] = 1, way_to_sum[2] = 2, way_to_sum[3] = 4;

	for (int i = 4; i <= 1000000; i++)
	{
		way_to_sum[i] = way_to_sum[i - 1] + way_to_sum[i - 2] + way_to_sum[i - 3];
		way_to_sum[i] %= 1000000009;
	}

	int t;	cin >> t;
	while (t--)
	{
		int n;	cin >> n;
		cout << way_to_sum[n] << '\n';
	}
}