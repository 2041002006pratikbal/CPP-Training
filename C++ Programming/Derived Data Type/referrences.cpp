#include<iostream>
using namespace std;
int main(){
    int x=2;

    int &alt=x;

    cout<<x<<endl;
    cout<<alt<<endl;

    alt=38;
    cout<<x<<endl;
    cout<<alt<<endl;

    x=4;
    cout<<x<<endl;
    cout<<alt<<endl;
}
