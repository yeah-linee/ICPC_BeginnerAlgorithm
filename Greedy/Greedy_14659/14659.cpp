#include <iostream>
using namespace std;
int height[30000 + 1];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	int n;	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> height[i];

	int now = 1, max = 0;
	while (now < n)
	{
		int enemy, win = 0;
		for (enemy = now + 1; enemy <= n; enemy++)
		{
			if (height[enemy] < height[now])
				win++;
			else
				break;
		}
		if (win > max) { max = win; }
		now = enemy;
	}
	cout << max;
	system("pause");
}