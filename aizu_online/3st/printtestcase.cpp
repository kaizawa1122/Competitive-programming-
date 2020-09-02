#include <iostream>
using namespace std;

int main()
{
	int x,y;
    y = 1;
    cin >> x;

    while(x != 0)
    {
        cout << "Case " << y << ":" << " " << x << endl;
        y++;
        cin >> x;
    }
    return 0;
}
