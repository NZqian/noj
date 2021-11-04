#include<iostream>
using namespace std;
void sort(int a[], int n){
    int i, j;
    for(i = n - 1; i >= 0; i --){
        for(j = 0; j < i; j ++){
            if(a[j] > a[j + 1]) swap(a[j], a[j + 1]);
        }
    }
}
int main(){
    int n, m; int a[100], b[100];int i, j;int money = 0;
    cin>>n>>m;
    for(i = 0; i < n; i ++) cin>>a[i];
    for(i = 0; i < m; i ++) cin>>b[i];
    sort(a, n); sort(b, m);
    for (i = 0; i < n; i ++){
        bool flag = false;
        for (j  = 0; j < n; j ++){
            if(b[j]>=a[i]){
                money = money + b[j];
                break;
            }
        }
        if(flag = false) cout << "NULL";
    }
    cout<<money<<endl;
}