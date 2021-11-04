#include<iostream>
using namespace std;
double rect_area(double lenth, double width=0) {
    if(width==0)return lenth*lenth;
    else return lenth*width;
}
int main() {
    int lenth1, lenth2, width;
    cin>>lenth1>>lenth2>>width;
    cout<<rect_area(lenth1)<<endl;
    cout<<rect_area(lenth2, width);
}