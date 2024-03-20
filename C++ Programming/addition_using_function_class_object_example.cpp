#include<iostream>
using namespace std;
class AddClass{
    int d=90;
    public:
        int a=10;
        int b=20;
    void add(){
        auto i=a+b;
        cout<<i<<endl;
    }
    int c=50;
};

int main(){
    AddClass ob1;
    ob1.add();
    cout<<ob1.c<<endl;
    //cout<<ob1.d<<endl;
}