#include<iostream>
using namespace std;
int maxFunc(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
int main(){
    cout<<maxFunc(8,10);
}