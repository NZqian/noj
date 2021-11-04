#include<iostream>
#include<string>
using namespace std;
int main(){
	string a; char s[1]; int n;
	getline(cin,a);
	cin>>s[0];
	cin>>n;
	a.insert(n,s,1);
	cout<<a;
}