#include <iostream>
#include <queue>
using namespace std;

int N, M, V;
bool matrix[1000 + 1][1000 + 1];
bool visited[1000 + 1];

void DFS(int now)
{
	visited[now] = true;
	cout << now << ' ';
	for (int i = 1; i <= N; i++)
	{
		if (matrix[now][i] && visited[i] == false)
			DFS(i);
	}
}

void BFS(int start)
{
	queue<int> my_queue;
	my_queue.push(start);
	while (!my_queue.empty())
	{
		int tmp = my_queue.front();
		my_queue.pop();
		if (visited[tmp]==true)
			continue;
		else
		{
			cout << tmp << ' ';
			visited[tmp] = true;
			for (int i = 1; i <= N; i++)
				if (matrix[tmp][i] && visited[i] == false)
					my_queue.push(i);
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> N >> M >> V;
	for (int i = 0; i < M; i++)
	{
		int a, b;	cin >> a >> b;
		matrix[a][b] = true, matrix[b][a] = true;
	}

	DFS(V);
	cout << '\n';
	for (int i = 0; i < 1001; i++)
	{
		if (visited[i] = true)
			visited[i] = false;
	}
	BFS(V);
}