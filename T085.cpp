#include<iostream>
#include<string>
using namespace std;
int fun(int s, int t) {
    if(t==0) s++;
    else s--;
    if(s==5)s=1;
    else if(s==0)s=4;
    return s;
}
int main() {
    string x, y, a="North", b="West", c="South", d="East";
    int s, n, t, i;
    cin>>x;
    cin>>n;
    if(x==a) s=1;
    else if(x==b) s=2;
    else if(x==c) s=3;
    else s=4;
    for(i=1; i<=n; i++) {
        cin>>t;
		s=fun(s, t);
    }
    switch(s){
    	case 1:cout<<"North";break;
    	case 2:cout<<"West";break;
    	case 3:cout<<"South";break;
    	case 4:cout<<"East";
    }
}