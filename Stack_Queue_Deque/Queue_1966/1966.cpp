#include <iostream>
#include <queue>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	int x;	cin >> x;
	while (x--)
	{
		int n, m;
		cin >> n >> m;
		queue<pair<int, bool>> queue;
		priority_queue<int> p_q;
		for (int i = 0; i < n; i++)
		{
			int a;	cin >> a;
			if (i == m)
				queue.push(make_pair(a, true));
			else
				queue.push(make_pair(a, false));
			p_q.push(a);
		}
		
		int sum = 0;
		while (1)
		{
			if (queue.front().first == p_q.top())
			{
				if (queue.front().second == true)
				{
					sum++;
					break;
				}
				else
				{
					sum++;
					queue.pop();
					p_q.pop();
				}
			}
			else
			{
				queue.push(queue.front());
				queue.pop();
			}
		}
		cout << sum << '\n';
	}
}