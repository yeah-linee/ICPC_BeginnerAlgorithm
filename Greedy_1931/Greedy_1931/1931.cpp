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
	for (auto &m : meeting)
	{
		cout << m.first << " " << m.second << '\n';
	}
}