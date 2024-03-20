#include<iostream>
using namespace std;
static int i=1;
int main(){
    cout<<"Global Static Variable "<<::i<<endl;
    static int i=78;
    cout<<"Local Static Variable "<<i<<endl;
    i=8;
    cout<<"Local Static Variable "<<i<<endl;
    
}