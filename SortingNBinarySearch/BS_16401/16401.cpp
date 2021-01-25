#include <iostream>
using namespace std;
#define MAX 1000000

int M, N;
int snack[MAX];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> M >> N;
	for (int i = 0; i < N; i++)
		cin >> snack[i];

	int l = 1, h = 2000000000;
	int answer = 0;

	while (h>=l)
	{
		int m = (l + h) / 2;

		int share = 0;
		for (int i = 0; i < N; i++)
			share += (snack[i] / m);

		if (share >= M)
		{
			l = m + 1;
			answer = m;
		}
		else if (share < M)
			h = m - 1;
	}

	cout << answer;
}