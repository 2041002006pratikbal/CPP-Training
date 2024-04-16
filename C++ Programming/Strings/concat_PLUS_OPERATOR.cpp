
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string s,s2;
    getline(cin,s);
    getline(cin,s2);
    
    string s3=s2+s;
    
    cout<<s3<<endl;
}