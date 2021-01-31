#include <iostream>
using namespace std;

int N, M;
int A[10000];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> N >> M;
	for (int i = 0; i < N; i++)
		cin >> A[i];

	int sp = 0, ep = 0;
	long long sum = A[0], n = 0;

	while (sp < N && ep < N)
	{
		if (sum == M)
			n++;
		
		if (sum <= M)
		{
			ep++;
			sum += A[ep];
		}
		else if (sum > M)
		{
			sum -= A[sp];
			sp++;
		}
	}
	cout << n;
}