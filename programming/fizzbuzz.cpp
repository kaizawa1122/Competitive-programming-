#include <iostream>
using namespace std;

int main() 
{
	int i,N;

	cin >> N;

	for(i = 0; i < N; i++)
	{
		if(i % 3 && i % 5 == 0)
		{
			cout << "FizzBuzz" << endl;
		}
		if(i % 3 == 0)
		{
			cout << "Fizz" << endl;
		}
		if(i % 5 == 0)
		{
			cout << "Buzz" << endl;
		}
	}
}
