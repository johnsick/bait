
#include "pch.h"
#include <iostream>
#include <queue>

using namespace std;

int main()
{
	int number;
	char sign;
	queue<int> que;
	while (cin >> sign)
	{
		if (sign == '+')
		{
			cin >> number;
			que.push(number);
		}
		else
			if (sign == '-')
				if (!que.empty())
					que.pop();
				else
					cout << "LMAO EMPTY" << endl;
			else
				cout << "Bitch u dumb" << endl;
	}
	while (!que.empty())
	{
		cout << que.front() << " ";
		que.pop();
	}
	return 0;
}


