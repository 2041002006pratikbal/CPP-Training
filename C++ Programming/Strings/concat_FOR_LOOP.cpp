
#include<iostream>
#include<string>
#include<sstream>

using namespace std;
int main(){
    string s,s2;
    getline(cin,s);
    getline(cin,s2);
    string s3;
    for(int i=0;i<s.length();i++){
        s3+=s[i];
    }
    for(int i=0;i<s2.length();i++){
        s3+=s2[i];
    }
    
    cout<<s3<<endl;
}