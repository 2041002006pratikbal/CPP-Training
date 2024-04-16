
#include<iostream>
#include<string>
#include<sstream>

using namespace std;
int main(){
    string s;
    getline(cin,s);
    
    cout<<s.substr(2,3)<<endl;
    cout<<s.substr(2,0)<<endl;
    cout<<s.substr(2,29)<<endl;
    cout<<s.substr(2)<<endl;    //it will find substring till last starting from 2
    //cout<<s.substr(69,2)<<endl;   //throws error
    cout<<s.substr(*s.begin()-s[0],3);
}

/*Important Points to Remember
The index of the first character is 0 (not 1).
If pos is equal to the string length, the function returns an empty string.
If pos is greater than the string length, it throws out_of_range. If this happens, there are no changes in the string.
If the requested sub-string len is greater than the size of a string, then returned sub-string is [pos, size()).
If len is not passed as a parameter, then returned sub-string is [pos, size()).*/