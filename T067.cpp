#include<iostream>
#include<fstream>
using namespace std;
int main(){	
    long h,w;
    ifstream inf ("DATA5611.BMP",ios_base::in|ios_base::binary);
    if(!inf.fail()){
        inf.seekg(18,ios_base::beg);
        inf.read((char*)&w,4);
        inf.read((char*)&h,4);
        cout<<w<<" "<<h;
        inf.close();
        }
return 0;}