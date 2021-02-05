#include <iostream>
#include <queue>
using namespace std;

long long N, K;

void BFS(int start)
{
	queue<pair<long long, long long>> my_queue;
	my_queue.push({start, 1});
	while (!my_queue.empty())
	{
		pair<long long, long long> tmp = my_queue.front();
		my_queue.pop();
		if (tmp.first > K)	continue;
		else if (tmp.first == K)
		{
			cout << tmp.second;
			return;
		}
		else
		{
			my_queue.push({ tmp.first * 2, tmp.second + 1 });
			my_queue.push({ tmp.first * 10 + 1, tmp.second + 1 });
		}
	}
	cout << -1;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);
	
	cin >> N >> K;

	BFS(N);
}