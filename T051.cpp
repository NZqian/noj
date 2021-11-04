#include<iostream>
using namespace std;
int fun(int a, int b){
    int i, s = 1;
    for(i = 1; i <= b; i++) s = s * a;
    return s;
}
int main(){
    char a[100]; int b[100];
    int i, j, cnt = 0, num, n, bn = 0;
    while((a[cnt]=cin.get())!='\n') cnt ++; //¨º&#228;¨¨&#235;¡Á&#214;¡¤&#251;¡ä&#174;
    for(i=0; i<cnt; i++){   //¡À¨¦¨¤¨²¡Á&#214;¡¤&#251;¡ä&#174;
        num = 0, n = 0;
        if(a[i]>=48&&a[i]<=57){
            j = i;
            while(a[j]>=48&&a[j]<=57) j++, n++;
            j = i;
            while(a[j]>=48&&a[j]<=57) {
                num = num + (a[j]-48)*fun(10,n-1);
                n--;
                j++;
                //cout<<a[j]<<ends<<num<<endl;
            }
            b[bn] = num;
            bn = bn + 1;
            i = j;
        }
    }
    cout<<bn<<endl;
    for(i = 0; i < bn - 1; i ++) cout<<b[i]<<' ';
    cout<<b[i];
}