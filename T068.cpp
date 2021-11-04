#include<iostream>
#include<string>
using namespace std;
int main(){
	string a, b, c;
	int i, j, k, len1, len2, len3;
	getline(cin, a);
	cin>>b>>c;
	len1=a.length();
	len2=b.length();
	len3=c.length();
    while(a.find(b)<len1){
		//cout<<a<<ends<<len1<<ends<<a.find(b)<<ends<<len2<<endl;
		a=a.replace(a.find(b), len2, c, 0, len3);
		len1=a.length();

    }
    cout<<a;
}