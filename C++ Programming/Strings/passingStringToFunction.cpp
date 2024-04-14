#include<iostream>
#include<sstream>
using namespace std;
void printFunc(string str){
    cout<<str<<endl;
}
int main(){
    string s;
    cin>>s; //only takes 1st word as input
    printFunc(s);
    getline(cin,s); //only works once i.e same user input is calculated.
    printFunc(s);
    return 0;
}