#include<iostream>
using namespace std;
int i;
extern int x;
int main(){
    cout<<::i<<::endl;
    extern int i;
    cout<<i<<endl;
    i=2;
    cout<<i<<endl;


    //cout<<x<<endl;
    //x=5;
    //cout<<::x<<endl;
}