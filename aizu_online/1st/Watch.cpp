#include <iostream>
using namespace std;

int main()
{
    int s,a,b,c;
    cin >> s;

    a = s / 3600;
    b = (s % 3600) / 60; 
    c = s % 60;
    cout << a << ":" << b << ":" << c << endl;
}