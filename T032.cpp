#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	int m[10000];
	int n, i; double s = 0, ave, sqr = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> m[i];
		s = s + m[i];
	}
	ave = s / n;
	for (i = 0; i < n; i++) {
		sqr = sqr + pow( (m[i] - ave),2);
	}
	cout  << fixed<<setprecision(6)<<sqr<< endl;
}
