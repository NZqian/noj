#include<iostream>
using namespace std;
int main() {
	int i, t, a = 1, b = 0, a1, b1;
	cin >> t;
	for (i = 0; i < t; i++) {
		a1 = b; b1 = 3 * a + 2 * b;
		a = a1; b = b1;
	}
	cout << a << ' ' << b << endl;
}
