#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	int n, m, i;
	double s = 0;
	cin >> n >> m;
	if (n > 0 && m > 0 && n < 1000000 && m < 1000000&&n<m) {
		for (i = n; i <= m; i++) {
			s = s + 1.0 / pow(i, 2);
		}
		cout << fixed << setprecision(5) << s << endl;
	}
}