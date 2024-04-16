
#include<iostream>
#include<string>
#include<sstream>

using namespace std;
int main(){
    string s;
    getline(cin,s);
    
    int pos=s.find("-");
    int len=s.length();
    
    //for after the character
        cout<<s.substr(pos+1)<<endl;
        
    //for before the character
        cout<<s.substr(0,pos)<<endl;
    
}