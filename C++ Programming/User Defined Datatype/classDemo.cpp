#include<iostream>
using namespace std;
class Demo{
    public:
    int x;
    void printInt(){
        cout<<x;
    }
};

int main(){
    Demo obj;
    obj.x=56;
    obj.printInt();
}