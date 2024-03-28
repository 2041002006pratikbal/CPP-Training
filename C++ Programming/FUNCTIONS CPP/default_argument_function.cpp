
#include <iostream>
using namespace std;
int add(int a,int b=4,int c=4){
    return a+b+c;
}
int main() {
    cout<<add(1)<<endl;
    cout<<add(9,3)<<endl;
    cout<<add(2,4,1)<<endl;
    return 0;
}