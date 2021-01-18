#include <iostream>
#include <queue>
using namespace std;

bool used[9] = { false };
deque<int> n_deq;
int n, m;

void bt(int height)
{
	if (height == m)
	{
		while (!n_deq.empty())
		{
			cout << n_deq.front() << ' ';
			n_deq.pop_front();
		}
		cout << '\n';
		return;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (used[i] == false)
			{
				n_deq.push_back(i);
				used[i] = true;
				bt(height + 1);
				if(!n_deq.empty())
					n_deq.pop_back();
				used[i] = false;
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> n >> m;

	bt(0);
}