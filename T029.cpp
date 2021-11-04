#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, m, a, i, s = 0;
	cin >> n;
	if (n <= 30) {
		m = int(pow(2, n)) - 1;
		for (i = 1; i <= m; i++) {
			for (a = i; a > 0; a = a / 2) {
				if (a % 2 == 1 && a/ 2 % 2 == 1 && a / 4 % 2 == 1) {
					s = s + 1;
					break;
					}
			}
		}
		cout << s << endl;
	}
}
