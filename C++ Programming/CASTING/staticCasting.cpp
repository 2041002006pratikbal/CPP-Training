#include<iostream>
#include<typeinfo>
using namespace std;
int main(){
    int x=93;
    float f=5.2;

    double d=static_cast<double>(x);
    int y=static_cast<int>(f);
    char c=static_cast<char>(x);
    cout<<d<<endl;
    cout<<y<<endl;
    cout<<c<<endl;
}