
#include<iostream>
#include<string>
#include<sstream>
#include<cstring>   //just for strcat
using namespace std;
int main(){
    char s[]="Hi all";
    char  s2[]="Good morning";
    
    strcat(s2,s);   //conactinated to 1st string in the argument
    
    cout<<s<<endl;
    cout<<s2<<endl;
}