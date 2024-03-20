#include<iostream>
using namespace std;
enum demo{
    monday,         //when accessed will display 0
    tuesday=400,    //when accessded will display 400
    wednesday,
    thrusday,
    friday,
    saturday,
    sunday
};

int main(){
    demo d=tuesday;
    cout<<d<<endl;
}