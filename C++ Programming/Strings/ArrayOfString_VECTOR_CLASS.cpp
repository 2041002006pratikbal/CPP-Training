//size and no. of string can be changed
//strings are muttable
//manipulation using vector functions
//any no of strings can also be added or removed
#include<iostream>
#include<sstream>
#include<cstring>
#include<string>
#include<vector>
using namespace std;
int main(){
    vector<string> string_arr;
    string_arr.push_back("Hi");
    string_arr.push_back("Hello");
    string_arr.push_back("how");
    string_arr.push_back("are");
    string_arr.push_back("you");
    
    for(int i=0;i<string_arr.size();i++){
        cout<<string_arr[i]<<" ";
    }
}