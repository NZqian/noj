#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
    char a[100]; unsigned int i, j, h;
    gets(a);
    for(i=0; i<strlen(a); i++){
        h=0;
        for(j=i; j<strlen(a)&&h<9; j++){
            if(a[i]==a[j])
                h++;
            else
                break;

        }
        cout<<h<<a[i];
        i=i+h-1;
    }
    return 0;
}