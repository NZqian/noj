#include<iostream>
using namespace std;
int main() {
	int a, b, c, m = 0, n, i;
	cin >> a >> b >> c;
	if (a >= b) {
		m = a / b;
		cout << m << '.';
	}
	if (a < b) cout << '0' << '.';
	m = a;
	for (i = 0; i < c-1; i++) {
		n = m * 10 % b;
		m = m * 10 / b;
		cout << m;
		m = n;		
	}
	n = m * 10 % b;
	m = m * 10 / b;	
	if (n * 10 / b >= 5) cout << m + 1;
	else cout << m;

}