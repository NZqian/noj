


#include <iostream>
using namespace std;
int ack(int a, int b){
    if(a==0&&b>0) return b+1;
    else if(a>0&&b==0) return (ack(a-1,1));
    else if(a>0&&b>0) return(ack(a-1,ack(a,b-1)));
    }
int main(){
    int a, b;
    cin>>a>>b;
    cout<<ack(a,b);
    return 0;
}
