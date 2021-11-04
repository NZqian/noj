#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double x, y,h;
	char c;
	cin >> x >> c >> y;
	if (pow((x - 2), 2) + pow((y - 2), 2) <= 1) h = 10;
	else if (pow((x + 2), 2) + pow((y - 2), 2) <= 1) h = 10;
	else if (pow((x + 2), 2) + pow((y + 2), 2) <= 1) h = 10;
	else if (pow((x - 2), 2) + pow((y + 2), 2) <= 1) h = 10;
	else h = 0;
	cout << h << endl;
}
