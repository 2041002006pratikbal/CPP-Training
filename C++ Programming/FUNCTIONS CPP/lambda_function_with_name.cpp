
#include <iostream>
using namespace std;
int main() {
    auto var=[](int x,int y=2){return x*y;};
    cout<<var(4)<<endl;
    return 0;
}