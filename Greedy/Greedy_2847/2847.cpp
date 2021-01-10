#include <iostream>
using namespace std;
int score[100 + 1];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);
	int n_level;	cin >> n_level;

	for (int i = 1; i <= n_level; i++)
		cin >> score[i];

	int n_dec = 0;
	for (int i = n_level; i > 1; i--)
	{
		while (score[i] <= score[i - 1])
		{
			score[i - 1]--;
			n_dec++;
		}
	}
	cout << n_dec;
}