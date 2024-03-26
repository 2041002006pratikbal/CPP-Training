#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number:";
    cin>>x;
    //cout<<endl;   //Not required after cin...it automatically puts on newline
    cout<<"The Number is : "<<x<<endl;
    cerr<<"This is Error Message(Unbuffered)"<<endl;
    clog<<"THis is a buffered error message"<<endl;
}