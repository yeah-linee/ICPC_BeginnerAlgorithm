#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int N, M;
                                                                                                                  
int main() 
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> N >> M;
	deque<int> my_deq, help;
	for (int i = 1; i <= N; i++)
		my_deq.push_back(i);

	queue<int> target;
	while (M--)
	{
		int a;	cin >> a;
		target.push(a);
	}

	int min_ = 0;
	while (!target.empty())
	{
		int tmp = min_;
		help = my_deq;
		while (help.front() != target.front())	// 2번 연산
		{
			help.push_back(help.front());
			help.pop_front();
			min_++;
		}

		help = my_deq;
		while (help.front() != target.front())	// 3번 연산
		{
			help.push_front(help.back());
			help.pop_back();
			tmp++;
		}

		min_ = min(min_, tmp);
		my_deq = help;

		if (my_deq.front() == target.front())	// 1번 연산
		{
			my_deq.pop_front();
			target.pop();
		}
	}
	cout << min_;
}