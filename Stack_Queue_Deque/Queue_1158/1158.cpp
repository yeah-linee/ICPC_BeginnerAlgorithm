#include <iostream>
#include <queue>
using namespace std;

int N, K;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> N >> K;
	queue<int> queue;

	for (int i = 1; i <= N; i++)
		queue.push(i);

	cout << "<";
	int count = 0;
	while (!queue.empty())
	{
		count++;
		if (count == K)
		{
			cout << queue.front();
			queue.pop();
			if (!queue.empty())	cout << ", ";
			count = 0;
		}
		else
		{
			queue.push(queue.front());
			queue.pop();
		}
	}
	cout << ">";
}