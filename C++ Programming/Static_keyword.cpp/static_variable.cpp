#include<iostream>
using namespace std;
void Demo(){
    static int x=1;
    cout <<x<< endl;
    x++;
}
int main(){
    //Demo ob;
    for(int i=0;i<5;i++){
        Demo();
    }
}