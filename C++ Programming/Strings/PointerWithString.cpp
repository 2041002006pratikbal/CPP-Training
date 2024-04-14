#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string s;
    getline(cin,s); //take a line as input
    char* ptr=&s[0];    //1st char of string is assigned to pointer
    while(*ptr!='\0'){  //loops till \0 is reached
        cout<<*ptr<<endl;
        ptr++;  //increments the pointer by 1 memory location
    }
    return 0;
}