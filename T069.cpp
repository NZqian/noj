#include<iostream>
#include<iomanip>
#include<stdio.h>
using namespace std;
typedef struct complex {
	double r;
	double i;
} COMPLEX;
COMPLEX plu(COMPLEX a, COMPLEX b)
{
	COMPLEX c;
	c.r=a.r+b.r;
	c.i=a.i+b.i;
	return c;
}
COMPLEX minu(COMPLEX a, COMPLEX b)
{
	COMPLEX c;
	c.r=a.r-b.r;
	c.i=a.i-b.i;
	return c;
}
COMPLEX times(COMPLEX a, COMPLEX b)
{
	COMPLEX c;
	c.r=a.r*b.r-a.i*b.i;
	c.i=a.i*b.r+a.r*b.i;
	return c;
}
COMPLEX devides(COMPLEX a, COMPLEX b)
{
	COMPLEX c;
	c.r=(a.r*b.r-a.i*(-b.i))/(b.r*b.r+b.i*b.i);
	c.i=(a.i*b.r+a.r*(-b.i))/(b.r*b.r+b.i*b.i);
	return c;
}
int main()
{
	COMPLEX a, b, c;
	cin>>a.r>>a.i>>b.r>>b.i;
	c=plu(a, b);
	printf("(%-.2lf%+.2lfi)+(%-.2lf%+.2lfi)=(%-.2lf%+.2lfi)\n", a.r, a.i, b.r, b.i, c.r, c.i);

	c=minu(a, b);
	printf("(%-.2lf%+.2lfi)-(%-.2lf%+.2lfi)=(%-.2lf%+.2lfi)\n", a.r, a.i, b.r, b.i, c.r, c.i);

	c=times(a, b);
	printf("(%-.2lf%+.2lfi)*(%-.2lf%+.2lfi)=(%-.2lf%+.2lfi)\n", a.r, a.i, b.r, b.i, c.r, c.i);

	c=devides(a, b);
	printf("(%-.2lf%+.2lfi)/(%-.2lf%+.2lfi)=(%-.2lf%+.2lfi)", a.r, a.i, b.r, b.i, c.r, c.i);

}