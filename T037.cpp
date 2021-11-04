#include<iostream>
using namespace std;
int fun(int a, int b) {
	int s;
	s = a + b;
	if (s > 99) s = s - (s / 100) * 100;
	return s;
}
int main() {
	int t, i;
	int a, b;
	int m[10000];
	cin >> t;
	for (i = 0; i < t; i++) {
		cin >> a >> b;
		m[i] = fun(a, b);
	}
	for (i = 0; i < t; i++) cout << m[i] << endl;
}