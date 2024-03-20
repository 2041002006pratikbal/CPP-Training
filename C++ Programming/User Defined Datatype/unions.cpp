#include<iostream>
using namespace std;
union demo{
    int x, y;
};
int main(){
    union demo t;
    t.x=2;
    cout<<t.x<<endl;
    cout<<t.y<<endl;
    t.y=5;
    cout<<t.x<<endl;
    cout<<t.y<<endl;

}