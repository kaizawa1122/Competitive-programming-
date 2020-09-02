#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,mi,ma,a,b;
    long long sum = 0;

    mi = 100000000;
    ma = -100000000;
    cin >> n;

    for (a=0; a < n; a++)
    {
        cin >> b;
        mi = min(mi,b);
        ma = max(ma,b);
        sum += b;
    }

    cout << mi << " " << ma << " " << sum << endl;
    return 0;
}