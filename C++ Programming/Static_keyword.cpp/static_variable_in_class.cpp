#include<iostream>
using namespace std;
class Demo{
    public: //needs to be public so whole program can access
    static int x;
    static inline int y {3};    //inline static variable can be initialized without scope resolution operator
    Demo(){ //constructor

    }
    
};
int Demo::x=4;  //to initialize static vaiable in class //scope resolution operator
int main(){
    Demo ob;
    Demo ob1;
    ob.x=28;
    ob1.x=9;
    cout<<ob.x<<endl;
    cout<<ob1.x<<endl;

    cout<<ob.y<<endl;
    cout<<ob1.y<<endl;
}