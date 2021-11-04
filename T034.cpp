#include<iostream>
using namespace std;
double fun(double x, double a0, double a1 = 0, double a2 = 0, double a3 = 0) {
	double s;
	s = a0 + a1 * x + a2 * x * x + a3 * x * x * x;
	return s;
}
int main() {
	int  n; double x;
	cin >> x >> n;
	int a0, a1, a2, a3;
	switch (n) {
	case 0: cin >> a0;  cout << fun(x, a0); break;
	case 1: cin >> a0 >> a1; cout << fun(x, a0, a1); break;
	case 2: cin >> a0 >> a1 >> a2; cout << fun(x, a0, a1, a2); break;
	case 3: cin >> a0 >> a1 >> a2 >> a3; cout << fun(x, a0, a1, a2, a3); break;
	}
}