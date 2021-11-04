#include<iostream>
#include<cmath>
using namespace std;
int square(int a, int b){
    int i; int s = 1;
    for (i = 1;i <= b; i++){
        s = s * a;
    }
    return s;
}
int main()
{
    int m, n; int i, j; int g = 0, s = 0;
    cin>> m >> n;
    for(i = square(10,n-1); i<square(10,n); i++){
        bool flag = false;
        if(i % m!= 0){
            for(j = 0; j < n; j++){
                if(i/square(10,j)%10==m){
                    flag = true;
                    break;
                }
            }
        }
        if(flag){
            g = g + 1;
            s = s + i;
        }
    }
    cout<<g<<' '<<s<<endl;
}
