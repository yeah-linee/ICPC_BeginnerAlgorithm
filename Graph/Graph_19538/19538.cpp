#include <iostream>
#include <vector>
#include <queue>;
using namespace std;

int N;
bool visited[200000 + 1];
vector<int> list[200000 + 1];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		while (1)
		{
			int a;	cin >> a;
			if (a == 0)	break;
			list[i].insert(a);
		}
	}
}