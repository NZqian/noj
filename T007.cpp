#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double m, n;
	int p;
	cin >> n;
	p = (int)n;
	if (p != n) p++;
	if (p <= 2) m = 7;
	else if (p <= 15) m =7+(p-2)*1.5;
	else m = 29.5 + (p - 15)*2.1;
	cout <<fixed<<setprecision(6)<< m << endl;
}
