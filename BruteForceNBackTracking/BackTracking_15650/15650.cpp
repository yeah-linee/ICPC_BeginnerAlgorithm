#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> sequece;
bool used[9] = { false };

void bt(int height, int now)
{
	if (height == m)
	{
		for (auto &e : sequece)
			cout << e << ' ';
		cout << '\n';
		return;
	}
	else
	{
		for (int i = now + 1; i <= n; i++)
		{
			if (used[i] == false)
			{
				used[i] = true;
				sequece.push_back(i);

				bt(height + 1, i);

				used[i] = false;
				sequece.pop_back();
			}
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> n >> m;

	bt(0, 0);
}