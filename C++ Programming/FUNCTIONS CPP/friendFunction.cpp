
#include <iostream>
using namespace std;
class Demo{
    private:
    int a=89;
    protected:
    void multiply(){
        cout<<a*a<<endl;
    }
    friend void print(Demo);    // should pass the class as argument
    //friend function is declared inside the class where we need to access
    
};
void print(Demo d){ //takes object of class as argument
    
    cout<<"Inside Friend Function"<<endl;
    cout<<d.a<<endl;
    d.multiply();
    
}
int main() {
    Demo d; //again a object is created in main
    print(d);   //the object is passed to the friend function

    return 0;
}