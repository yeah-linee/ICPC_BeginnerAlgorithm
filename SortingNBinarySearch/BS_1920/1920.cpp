#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 100000

int arr[MAX], N;
int tmp[MAX], M;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> arr[i];
	sort(arr, arr + N);

	cin >> M;
	for (int i = 0; i < M; i++)
		cin >> tmp[i];

	for (int i = 0; i < M; i++)
	{
		int l = 0, h = N - 1;
		int m;

		while (h >= l)
		{
			m = (h + l) / 2;

			if (arr[m] == tmp[i])
				break;
			else if (arr[m] < tmp[i])
				l = m + 1;
			else if (arr[m] > tmp[i])
				h = m - 1;
		}

		if (arr[m] == tmp[i])
			tmp[i] = 1;
		else
			tmp[i] = 0;
	}

	for (int i = 0; i < M; i++)
		cout << tmp[i] << '\n';
}