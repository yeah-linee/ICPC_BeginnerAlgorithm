#include <iostream>
#include <vector>
using namespace std;

bool used[9] = { false };
vector<int> sequence;
int n, m;

void bt(int height)
{
	if (height == m)
	{
		for (auto &e : sequence)
			cout << e << ' ';
		cout << '\n';
		return;
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			if (used[i] == false)
			{
				sequence.push_back(i);
				used[i] = true;
				bt(height + 1);
				
				sequence.pop_back();
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