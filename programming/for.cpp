#include <bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> a = {1, 3, 4, 2};
	for (int i : a) 
	{
		if (i == 1)
		{
			cout << a.at(i)  << endl;
		}
		if (i == 10)
		{
			break;
		}

	}
}
