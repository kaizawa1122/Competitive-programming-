#include <iostream>
using namespace std;

int digit_sum(int N)
{
    int sum = 0;
    while (N != 0)
    {
        sum += (N % 10);
        N = N / 10;
    }
    return sum;
}

int main()
{
    int N,a,b;
    cin >> N >> a >> b;
    int ans = 0;

    for (int i = 1; i <= N; i++)
    {
        if(a <= digit_sum(i) && digit_sum(i) <= b)
        {
            ans += i;
        }
    }
    cout << ans << endl;
    return 0;
}