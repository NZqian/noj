#include<iostream>
using namespace std;
int fun(int m) {
	return m / 100 + (m % 100) / 50 + (m % 50) / 10 + (m % 10) / 5 + (m % 5) / 2 + (m % 5) % 2;
}
int main() {
	int n, i, s = 0;
	cin >> n;
	int m[100];
	for (i = 0; i < n; i++) {
		cin >> m[i];
		s = s + fun(m[i]);
	}
	cout << s << endl;
}