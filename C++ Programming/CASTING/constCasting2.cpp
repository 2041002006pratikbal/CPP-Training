#include<iostream>
using namespace std;
int main(){
    int i=3;
    const int* ptr=&i;
    cout<<*ptr<<endl;
    cout<<ptr<<endl;
    // int * newPtr=ptr;   //shows error 
    int *newPtr=const_cast<int *>(ptr); //const Casting
    cout<<*newPtr<<endl;
    cout<<newPtr<<endl;
    *newPtr=10;     //changing value in new pointer
    cout<<*newPtr<<endl;
    cout<<*ptr<<endl;
    
}