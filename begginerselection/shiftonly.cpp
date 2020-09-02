#include <iostream>
using namespace std;

int main()
{
    int n,a[200],count;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    count = 0;

    while(true)
    {
        bool even = true;

        for (int i = 0; i < n; i++)
        {
            if(a[i] % 2 == 1)
            {
                even = false;
            }
            else
            {
                a[i] /= 2;
            }   
        }

        if(!even)
        {
            break;
        }
        else
        {
            count++;
        }
    }
    
    cout << count << endl;
}