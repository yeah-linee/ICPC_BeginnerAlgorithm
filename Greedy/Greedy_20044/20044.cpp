#include <iostream>
#include <algorithm>
using namespace std;
int w_s[10000 + 1];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	int n_team;	cin >> n_team;
	for (int i = 0; i < 2 * n_team; i++)
		cin >> w_s[i];

	sort(w_s, w_s + 2 * n_team);

	int s_min = 200000;
	for (int i = 0; i < n_team; i++)
	{
		s_min = min(s_min, w_s[i] + w_s[2 * n_team - i - 1]);
	}
	cout << s_min;
}