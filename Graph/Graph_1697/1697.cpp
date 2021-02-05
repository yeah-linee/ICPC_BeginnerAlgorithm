#include <iostream>
#include <queue>
using namespace std;
#define MAX 100001

long long N, K;
bool visited[MAX];

void BFS(long long subin)
{
	queue<pair<long long, long long>> my_queue;
	my_queue.push({ subin, 0 });
	visited[subin] = true;
	while (!my_queue.empty())
	{
		pair<long long, long long> tmp = my_queue.front();
		my_queue.pop();
		
		if (tmp.first == K)
		{
			cout << tmp.second;
			return;
		}

		if (tmp.first + 1 < MAX && visited[tmp.first + 1]==false)
		{
			my_queue.push({ tmp.first + 1, tmp.second + 1 });
			visited[tmp.first + 1] = true;
		}
		if (tmp.first - 1 >= 0 && visited[tmp.first - 1] == false)
		{
			my_queue.push({ tmp.first - 1, tmp.second + 1 });
			visited[tmp.first - 1] = true;
		}
		if (tmp.first * 2 < MAX && visited[tmp.first * 2] == false)
		{
			my_queue.push({ tmp.first * 2, tmp.second + 1 });
			visited[tmp.first * 2] = true;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> N >> K;

	BFS(N);
}