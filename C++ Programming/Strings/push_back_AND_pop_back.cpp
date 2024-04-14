#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    cout<<"Original: "<<s<<endl;
    s.push_back('k');
    cout<<"After push_back :"<<s<<endl;
    s.pop_back();
    cout<<"After pop_back :"<<s<<endl;
    return 0;
}