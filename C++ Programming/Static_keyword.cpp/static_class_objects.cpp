#include<iostream>
using namespace std;
class Demo{
    public:
    int i=1;
    Demo(){
        cout<<"Inside the Constructor"<<endl;
        cout<<i<<endl;
    }
    ~Demo(){
        cout<<"Inside the Destructor"<<endl;
    }
};
int main(){
    Demo obj;
    cout<<"Inside main function"<<endl;
}