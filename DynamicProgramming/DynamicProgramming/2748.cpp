#include <iostream>
using namespace std;

int N;
long long n_fibo[91];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> N;

	n_fibo[0] = 0;	n_fibo[1] = 1;

	for (int i = 2; i <= N; i++)
	{
		n_fibo[i] = n_fibo[i - 2] + n_fibo[i - 1];
	}

	cout << n_fibo[N];
}