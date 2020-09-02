#include <iostream>

using namespace std;

main ()
{
    string n;
    cin >> n;

    int sum = 0;

    for (int i = 0; i < (int) n.size(); ++i)
    {
        sum += n[i] - '0';
    }

    if (sum % 9 == 0)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    

}