#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x1, x2;
    int i, a;
    cin>>a;
    x1=a;
    do{
        x2=x1;
        x1=(x2+a/x2)/2;
    }while(fabs(x2-x1)>=1e-5);
    cout<<x1;
}