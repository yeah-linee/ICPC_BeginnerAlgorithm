#include <iostream>
using namespace std;

int G;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> G;
	int sp = 1, ep = 2, n = 0;
	long long now_G = 0;

	while (sp < ep)
	{
		now_G = ep * ep - sp * sp;

		if (now_G == G)
		{
			n++;
			cout << ep << '\n';
		}

		if (now_G <= G)
			ep++;
		else if (now_G > G)
			sp++;
	}

	if (n <= 0)
		cout << -1;
}