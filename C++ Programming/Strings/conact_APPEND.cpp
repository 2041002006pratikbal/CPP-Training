
#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string s,s2;
    getline(cin,s);
    getline(cin,s2);
    
    s2.append(s);
    
    cout<<s2<<endl;
}