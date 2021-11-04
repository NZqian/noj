#include<iostream>
using namespace std;
int main()
{
	int n,m;
	cin >> n;
	if (n < 100000) {
		if (n > 9999) {
			char a, b, c, d, e;
			a = n / 10000;
			b = n / 1000 % 10;
			c = n / 100 % 10;
			d = n / 10 % 10;
			e = n % 10;
			if (a == e
				&& b == d) cout << "yes" <<endl ;
			else cout << "no" << endl;
		}

		else if (n > 999) {
			int a, b, c, d;
			a = n / 1000;
			b = n / 100 % 10;
			c = n / 10 % 10;
			d = n % 10;
			if (a == d && b == c) cout << "yes" << endl;
			else cout << "no" << endl;
		}

		else if (n > 99) {
			int a, b, c;
			a = n / 100;
			b = n / 10 % 10;
			c = n % 10;
			if (a == c) cout << "yes" << endl;
			else cout << "no" << endl;
		}
		else if (n > 9) {
			int a, b;
			a = n / 10 % 10;
			b = n % 10;
			if (a == b) cout << "yes" << endl;
			else cout << "no" << endl;
		}
		else {
			int a;
			a = n;
			cout << "yes" << endl;
		}
	}
}
