#include <iostream>
#include <stack>
#include <string>
using namespace std;

int N;
string formula;
double sTon[26];

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> N;	cin >> formula;
	for (int i = 0; i < N; i++)
		cin >> sTon[i];

	stack<double> st;

	for (auto &f : formula)
	{
		if ((f < 'A') && (f > 'N'))		// f가 연산자일 때
		{
			double right = st.top();
			st.pop();
			double left = st.top();
			st.pop();

			if (f == '+')
				st.push(left + right);
			else if (f == '-')
				st.push(left - right);
			else if (f == '*')
				st.push((1.0) * left * right);
			else if (f == '/')
				st.push((1.0) * left / right);
		}
		else
			st.push(sTon[f - 'A']);
	}

	cout << st.top();
}