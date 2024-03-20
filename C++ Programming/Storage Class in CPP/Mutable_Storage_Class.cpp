#include<iostream>
using namespace std;
class Demo{
public:
    mutable int x;
    int y;
};

int main(){
    const Demo obj={1,2};
    cout<<obj.x<<endl;
    cout<<obj.y<<endl;
    obj.x=5;
    //obj.y=4;    //Not a mutable variable
    cout<<obj.x<<endl;
    cout<<obj.y<<endl;
}