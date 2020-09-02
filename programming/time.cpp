#include <bits/stdc++.h>
using namespace std;

int main()
{
    int second,a,b;
    cin >> second;
    a = second / 3600;
    second = second % 3600;
    b = second / 60;
    second = second % 60;

    cout << a << ":" << b << ":" << second << endl;

}

