#include <iostream>
#include <algorithm>	//sort
#include <vector>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	int n;
	cin >> n;

	vector<pair<int, int>> meeting;
	while (n--)
	{
		int start, end;
		cin >> start >> end;
		meeting.push_back({ end, start });
	}

	sort(meeting.begin(), meeting.end());

	int n_meeting = 0, now_time = 0;
	for(auto &m:meeting)
	{
		if (m.second >= now_time)
		{
			now_time = m.first;
			n_meeting++;
		}
	}
	cout << n_meeting;
}