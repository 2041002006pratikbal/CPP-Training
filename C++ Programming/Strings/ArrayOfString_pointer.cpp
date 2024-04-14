// it is required where we cannot change
// the value of string once stored. 
//but we can have string of large size also
//strings created are immutable because of const
#include<iostream>
#include<sstream>
#include<cstring>
#include<string>
using namespace std;
int main(){
    const int size=3;   //HERE size value cannot be changed
    //cin>>size;
    const char* string_arr[size]={"HI ALL","HOW ARE YOU","?"};
    /*for(int i=0;i<size;i++){
        //getline(cin,string_arr[i]); //we cannot do user input
    }*/
    
    for(int i=0;i<size;i++){
        cout<<string_arr[i]<<" ";
    }
}