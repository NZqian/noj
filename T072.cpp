#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main() {
    string a, b;
	int m[100] = { 0 }, n[100] = { 0 }, ans[200] = { 0 }, i, j, len1, len2;
	cin >> a >> b;
	len1 = a.length(); len2 = b.length();
	for (i = len1 - 1, j = 0; i >= 0; i--, j++)m[j] = a[i] - 48;
	for (i = len2 - 1, j = 0; i >= 0; i--, j++)n[j] = b[i] - 48;
	for (i = 0; i < len1; i++) {
		for (j = 0; j < len2; j++) {
			ans[i + j] += m[i] * n[j];
			//cout<<m[i]<<ends<<n[j]<<ends<<ans[i+j]<<endl;
		}
	}
	for (i = 0; i < len1 + len2; i++) {
		if (ans[i] > 9)ans[i + 1] += ans[i] / 10;
		ans[i] %= 10;
	}
	for (i = len1 + len2 - 1; i >= 0; i--) {
		if (ans[i] == 0) continue;
		else break;
	}
	for (; i >= 0; i--) cout << ans[i];

}