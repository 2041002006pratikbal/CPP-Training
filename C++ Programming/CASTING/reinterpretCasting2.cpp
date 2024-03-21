#include<iostream>
using namespace std;
int main(){
    int x=76;
    int * intPtr=&x;
    char * charPtr=reinterpret_cast<char *>(intPtr);
    cout<<intPtr<<endl;
    cout<<reinterpret_cast<void *>(charPtr)<<endl;
    cout<<endl;
    cout<<*intPtr<<endl;
    cout<<*charPtr<<endl;
}