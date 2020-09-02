#include <bits/stdc++.h>
using namespace std;

int main()
{
    double r,x,y,z;

    scanf("%lf",&r);
    x = 3.141592653589;

    y = r * r * x;//面積
    z = r * 2 * x;//円周

    printf("%f %f\n",y,z);
    return 0;
}