#include<iostream>
using namespace std;
int main() {
	int m, n, i, j; int s1 = 0, s2 = 0;
	int a[100][100];	
	cin >> n >> m;
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (j = 0; j < m; j++) s1 = s1 + a[0][j] + a[n - 1][j];
	for (i = 1; i < n - 1; i++) s1 = s1 + a[i][0] + a[i][m-1];
	for (i = 1; i < n - 1; i++) {
		for (j = 1; j < m - 1; j++) s2 = s2 + a[i][j];
	}
	cout << s1 - s2 << endl;
}