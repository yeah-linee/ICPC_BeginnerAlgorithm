#include <iostream>
#include <algorithm>
int A[1000];
using namespace std;

bool compare(int x, int y)
{
	if ((x % 10 == 0) && (y % 10 != 0))
		return true;
	else if ((x % 10 != 0) && (y % 10 == 0))
		return false;
	else x < y;
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> A[i];
	//sort(A, A + n, compare);
	for (int i = 0; i < n; i++)
		cout << A[i] << " ";

	//while (m > 0)
	{

	}
}