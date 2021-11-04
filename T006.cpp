#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double m, n;
	cin >> n;

	if (n <= 10) m = n * 0.1;
	else if (n <= 20) m = (n - 10.0) * 0.075 + 1.0;
	else if (n <= 40) m = (n - 20.0) * 0.05 + 1.75;
	else if (n <= 60) m = (n - 40.0) * 0.03 + 2.75;
	else if (n <= 100) m = (n - 60.0) * 0.015 + 3.35;
	else m = (n - 100)*0.001 + 3.95;
	cout <<fixed<<setprecision(6)<< m << endl;
}
