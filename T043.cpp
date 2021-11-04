#include<iostream>
using namespace std;
int main() {
	int n; int i, j;
	cin >> n;
	int a = n;
	if (n <= 100) {
		int m[100][100];
		for (i = 0; i < n; i++) {
			for (j = 0; j < n; j++) cin >> m[i][j];
		}
		for (i = 0; i < n; i++) {
			for (j = 0; j < a; j++) {
				cout << m[i][j] << ' ' ;
			}
			a--;
			cout << '\n';
		}

	}

}