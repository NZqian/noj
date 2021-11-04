#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	int n;
	int s = 0;
	int i, j, k, l;
	int a, b;
	int add, times;
	int an, bn;
	cin >> n;
	for (i = 49383; i <= 98765; i++) {
		a = i;
		if (a%n == 0 && a / n > 1234) {
			add = 0; times = 1;
			b = a / n;
			for (j = 0; j <= 4; j++) {
				an = a / int(pow(10, j)) % 10;
				if (an != 0) {
					add = add + an;
					times = times * an;
				}
			}
			for (k = 0; k <= 4; k++) {
				bn = b / int(pow(10, k)) % 10;
				if (bn != 0) {
					add = add + bn;
					times = times * bn;
				}
			}
			if (add == 45 && times == 362880) cout << a << '/' << setw(5) << setfill('0') << b << '=' << n << endl;
			
		}
	}
}
