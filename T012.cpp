#include<iostream>
#include<iomanip>
using namespace std;
int main() 
{
	int n, i, s=0, a, j;

	for (n = 1; n < 1000; n++) 
	{
		s = 0;
		for (i = 1; i < n; i++) 
		{
			if (n%i == 0)
			{
				j = i;
				s = s + i;
			}
		}
		if (n==s)
			{
				int x;
				cout << n << '=';
				for (x = 1; x < j ; x++)
					{	
						if (n%x == 0) cout << x << '+';
					}
			cout << j << endl;
			}
	
	}
}