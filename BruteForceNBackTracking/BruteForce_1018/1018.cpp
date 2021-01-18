#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 55

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	int n, m;
	cin >> n >> m;
	char mat[MAX][MAX];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> mat[i][j];

	int ans = 2147483647;	// INT_MAX
	for (int i = 0; i <= n - 8; i++)	
		for (int j = 0; j <= m - 8; j++)		// possible all chessmat
		{
			int num1 = 0, num2 = 0;

			for (int x = i; x < i + 8; x++)
				for (int y = j; y < j + 8; y++)			// check 8*8chessmat's color
				{
					if (mat[x][y] == 'B')
					{
						if (((x + y) % 2) == 0)
							num1++;
						else
							num2++;
					}
					else
					{
						if (((x + y) % 2) == 0)
							num2++;
						else
							num1++;
					}
				}
			ans = min({ ans,num1,num2 });
		}
	cout << ans;
}