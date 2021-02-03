#include <iostream>
#include <stack>
#include <string>
using namespace std;

void isBalanced(string input)
{
	stack<char> stack;
	for (auto &e : input)
	{
		if (e == '[' || e == '(')
			stack.push(e);
		else if (e == ']')
		{
			if (!stack.empty() && stack.top() == '[')
				stack.pop();
			else
			{
				cout << "no\n";
				return;
			}
		}
		else if (e == ')')
		{
			if (!stack.empty() && stack.top() == '(')
				stack.pop();
			else
			{
				cout << "no\n";
				return;
			}
		}
	}
	if (stack.empty())		/********Don't forget check it!********/
		cout << "yes\n";
	else
		cout << "no\n";
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	while (1)
	{
		string input;
		getline(cin, input);
		if (input == ".")	break;
		isBalanced(input);
	}
}