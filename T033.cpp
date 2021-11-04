#include<iostream>
using namespace std;
template <typename T> void sort(T &x, T &y, T &z){
	if(x>y) swap(x,y);
	if(x>z) swap(x, z);
	if(y>z) swap(y, z);
}
int main(){
	int a, b, c;
	char m, n, p;
	double x, y, z;
	cin>>a>>b>>c;
	cin>>m>>n>>p;
	cin>>x>>y>>z;
	sort(a, b, c);
	sort(m, n, p);
	sort(x, y, z);
	cout<<a<<' '<<b<<' '<<c<<endl;
	cout<<m<<' '<<n<<' '<<p<<endl;
	cout<<x<<' '<<y<<' '<<z<<endl;
	return 0;
}