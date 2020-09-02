#include <bits/stdc++.h>
using namespace std;
//約数を求める問題だが、余りが0だったら約数という事を分かる。面白い問題。

int main()
{
    int a,b,c,x,y;
    x = 0;
    y = 0;
    cin >> a >> b >> c;
    for (x=a; x<= b; x++)
    {
        if (c % x == 0)
        {
            y++;
        }
    }
    cout << y << endl;
    return 0;
}