#include<iostream>
using namespace std;
int main()
{
	int n;
	char m;
	cin >> n;
	if (n < 60) m = 'E';
	else if (n < 70) m = 'D';
	else if (n < 80) m = 'C';
	else if (n < 90) m = 'B';
	else m = 'A';
	cout << m << endl;
}
