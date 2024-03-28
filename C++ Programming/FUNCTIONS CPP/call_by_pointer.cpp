
#include <iostream>
using namespace std;
int multiply(int * x){   //a pointer is passed as formal parameter
    *x=(*x)*(*x);   //value strored in x location is squared
    return *x;  //we return a integer i.e. *x not x which is a pointer
}
int main() {
    int x=3;
    cout<<"X before "<<x<<endl;
    cout<<"X in function "<<multiply(&x)<<endl; //& is used to pass the memory of x to function 
    cout<<"X after "<<x<<endl;

    return 0;
}