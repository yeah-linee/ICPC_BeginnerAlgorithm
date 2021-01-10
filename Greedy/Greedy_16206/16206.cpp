#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;
deque<int> A_10, A_not10;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	int n, m;
	cin >> n >> m;
	int n_slice = 0;
	for (int i = 0; i < n; i++)
	{
		int a;	cin >> a;
		if (a == 10)
			n_slice++;
		else if (a % 10 == 0)
			A_10.push_back(a);
		else if (a > 10)
			A_not10.push_back(a);
	}

	if (!A_10.empty() && m > 0)
	{
		sort(A_10.begin(), A_10.end());
	}
	while (!A_10.empty() && m > 0)
	{
		if (A_10.front() == 20)
		{
			m--;
			n_slice += 2;
			A_10.pop_front();
		}
		else
		{
			m--;
			n_slice++;
			A_10.front() -= 10;
		}
	}

	if (!A_not10.empty() && m > 0)
	{
		sort(A_not10.begin(), A_not10.end());
	}
	while (!A_not10.empty() && m > 0)
	{
		if (A_not10.front() < 10)
		{
			A_not10.pop_front();
		}
		else
		{
			m--;
			n_slice++;
			A_not10.front() -= 10;
		}
	}
	cout << n_slice;
}