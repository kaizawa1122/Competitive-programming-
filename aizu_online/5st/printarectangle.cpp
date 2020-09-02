#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,w;
    int x,y;
    cin >> h >> w;

while(h != 0 && w != 0)
{
    for (x = 0; x < h; x++)
    {
        for (y = 0; y < w; y++)
        {
            cout << "#";
        }
        cout << endl;
    }
    cout << endl;
    cin >> h >> w;
}
    return 0;
}