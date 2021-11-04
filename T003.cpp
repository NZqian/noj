#include<iostream>
#include<iomanip>
using  namespace std;
int main() {
	double m, a, c, z, p;
	cin >> m >> a >> c;
	z = m + a + c;
	p = (m + a + c)/3;
	cout <<fixed<< setprecision(6) << z << endl << p << endl;
}
