#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x,y;
    double z;

    cin >> a >> b;
    x = a / b;
    y = a % b;
    z = (1.0 * a) / b;

    printf("%d %d %.5f\n",x,y,z);
    
    return 0;
}