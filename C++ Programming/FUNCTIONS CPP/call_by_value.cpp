
#include <iostream>
using namespace std;
int multiply(int x){
    x=x*x;
    return x;
}
int main() {
    int x=3;
    cout<<"X before "<<x<<endl;
    cout<<"X in function "<<multiply(x)<<endl;
    cout<<"X after "<<x<<endl;

    return 0;
}