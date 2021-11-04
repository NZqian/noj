#include<iostream>
#include<iomanip>
using namespace std;
double sqr(int a, int b){
    double i, s=1;
    for(i=0; i<b; i++){
        s=s*a;
    }
    return s;
}
int main(){
    int i, n;double s=0;
    cin>>n;
    for(i=1; i<=n; i++){
        s=s+(sqr(-1, i-1)*sqr(2, i))/((sqr(2, i)+sqr(-1, i))*(sqr(2, i+1)+sqr(-1, i+1)));
    }
    cout<<fixed<<setprecision(6)<<s;
}