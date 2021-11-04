#include<iostream>
#include<iomanip>
#define PI 3.14159
using namespace std;
int main()
{
	double r, h, l, s, vq, sq, vz;
	cin >> r >> h;
	l = 2 * PI*r;
	s = PI * r*r;
	vq = 4.0 / 3.0 * PI*r*r*r;
	sq = 4 * PI * r * r;
	vz = PI * r*r*h;
	cout << fixed << setprecision(2) << l << endl << s << endl << sq << endl << vq << endl << vz << endl;
}
