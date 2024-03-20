#include<iostream>
using namespace std;
class Demo{
    public:
    void func(){
        cout<<"i am inside function"<<endl;

    }
    
    Demo(){
        cout<<"I am inside Constructor"<<endl;
        func();
    }
    
    ~Demo(){    //Destructor is a special function that executes when the scope of object of class is going to end.     
    //Always executes at end    //Helps in deleteing all the memory used by the object of class
        cout<<"I am inside Destructor"<<endl;
    }
};

int main(){
    Demo ob;
    ob.func();
    return 0;
}