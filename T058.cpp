#include<iostream>
#include<cstring>
#include<stdio.h>
using namespace std;
int main(){
    char s[8];
    int i;
    gets(s);
    if(strcmp(s,"Ab minor")==0)cout<<"G# minor";
    else if(strcmp(s,"A# major")==0)cout<<"Bb major";
    else if(strcmp(s,"A# minor")==0)cout<<"Bb minor";
    else if(strcmp(s,"C# major")==0)cout<<"Dd major";
    else if(strcmp(s,"Db minor")==0)cout<<"C# minor";
    else if(strcmp(s,"D# major")==0)cout<<"Eb major";
    else if(strcmp(s,"D# minor")==0)cout<<"Eb minor";
    else if(strcmp(s,"Gb major")==0)cout<<"F# major";
    else if(strcmp(s,"Gb minor")==0)cout<<"F# minor";
    else if(strcmp(s,"G# major")==0)cout<<"Ab major";
    else cout<<"unique";
}
