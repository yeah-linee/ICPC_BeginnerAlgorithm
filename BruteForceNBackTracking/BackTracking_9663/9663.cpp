#include <iostream>
using namespace std;
#define MAX 40

int N;
bool isused1[MAX];		// 같은 열의 퀸 존재여부
bool isused2[MAX];		// 우상 대각선의 퀸 존재여부
bool isused3[MAX];		// 좌상 대각선의 퀸 존재여부
int sum = 0;

void bt(int level)
{
	if (level == N)
	{
		sum++;
		return;
	}

	for (int i = 0; i < N; i++)
	{
		if (isused1[i] || isused2[i + level] || isused3[level - i + N - 1])	continue;

		isused1[i] = true;
		isused2[i + level] = true;
		isused3[level - i + N - 1] = true;

		bt(level + 1);

		isused1[i] = false;
		isused2[i + level] = false;
		isused3[level - i + N - 1] = false;
	}
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> N;
	bt(0);
	cout << sum;
}