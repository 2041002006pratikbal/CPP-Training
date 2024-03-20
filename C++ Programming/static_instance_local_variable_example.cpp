#include<iostream>
using namespace std;
static int static_variable; //global static variable declared outside class
class Var{
    public:
        int instance_variable=70;
        static int static_variable1;
        //static_variable=10;

    void func(){
        int local_variable=10; //need to be initialized inside the scope
        static_variable=15;
        cout<<local_variable<<endl;
        cout<<static_variable<<endl;
        cout<<instance_variable<<endl;
        cout<<static_variable1<<endl;

    }
       // static_variable=20;   //cannot be initialized here
        //instance_variable=10;
};

int Var::static_variable1=25;   //staic variable in a class is initialized explicitly outside the class using class namespace
// or
// int Var::static_variable1 {25};
int main(){
   // static_variable=20;   //cannot be initialized here , need to be initialized inside its scope
   Var obj;
   obj.func();
   cout<<static_variable<<endl;
   //cout<<static_variable1<<endl;  // it will not work as this static variable is inside a class and can be access by its object
   static_variable=19; //it will work as static variable address does not change but value changes.
   cout<<obj.instance_variable<<endl;
   cout<<obj.static_variable1<<endl;
   cout<<static_variable<<endl;
   Var obj2;
   obj2.instance_variable=44;
   obj2.static_variable1=99;
   cout<<obj2.instance_variable<<endl;
   cout<<obj.instance_variable<<endl;
   cout<<obj2.static_variable1<<endl;
}