//size can be changed
//no. of strings can also be changed
//strings are muttable
// strings can also be user inputs

#include<iostream>
#include<sstream>
#include<cstring>
#include<string>
using namespace std;
int main(){
    //string string_arr[]={"Hi all","this is pratik","from cse","Good Morning"};
    string string_arr[4];
    for(int i=0;i<4;i++){
        getline(cin,string_arr[i]);
    }
    for(int i=0;i<4;i++){
        cout<<string_arr[i]<<" ";
    }
}