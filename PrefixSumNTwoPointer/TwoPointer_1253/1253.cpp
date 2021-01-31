#include <iostream>
#include <algorithm>
using namespace std;

int N;
long long A[2000];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> A[i];
	sort(A, A + N);

	int n = 0;

	for (int goal = 0; goal < N; goal++)
	{
		int sp = 0, ep = N - 1;
		while (sp < ep)
		{
			long long sum = A[sp] + A[ep];

			if (sum == A[goal])
			{
				if (sp != goal && ep != goal)
				{
					n++;
					break;
				}
				else if (sp == goal)
					sp++;
				else if (ep == goal)
					ep--;
			}
			else if (sum < A[goal])
				sp++;
			else if (sum > A[goal])
				ep--;
		}
	}
	cout << n;
}