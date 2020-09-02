#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans = 0;
    int count = 0;
    string s;
    cin >> s;
    
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i] == 'A' || s[i] == 'C' || s[i] == 'G' || s[i] == 'T')
        {
            count++;
            ans = max(ans,count);
        }
        else
        {
            count = 0;
        }
    }
    cout << ans << endl;
}   