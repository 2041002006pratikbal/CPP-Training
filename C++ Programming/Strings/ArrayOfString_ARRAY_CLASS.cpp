//size of string can be changed
// no. of strings is fixed

#include<iostream>
#include<sstream>
#include<cstring>
#include<string>
#include<array>
using namespace std;
int main(){
    array<string,4> string_arr{"Hi","All","i'm","Pratik"};
    //size is specified while declaration
    
    for(int i=0;i<string_arr.size();i++){
        cout<<string_arr[i]<<" ";
    }
}