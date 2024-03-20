#include<iostream>
using namespace std;
struct structure{
    int x=45;
    char c='f';
    void multiply(){
        cout<<x*x<<endl;
    }

};

int main(){
    structure obj;
    obj.multiply();
    obj.x=23;
    obj.multiply();
}