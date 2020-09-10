#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int x,a,sum = 1;
    vector<int> b;
    cin >> x;
    for(int i = 1; i <= x; i++)
    {
        cin >> a;
        b.push_back(a);
    }
    int zero = 0;
    for(int j = 0; j <= x; j++)
    {
        sum *= b.at(j);
        if(b[j] == 0)
        {
            zero++;
        }
    }
    if (sum > 1000000000000000000)
    {
        cout << -1 << endl;
        return 0;
    }
	else
	{
		cout << sum << endl;
	}

}
