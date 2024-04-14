#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    string s2;
    getline(cin,s2);
    cout<<"s is :"<<s<<endl;
    cout<<"s2 is :"<<s2<<endl;
    
    char arr[10];
    s.copy(arr,5,2);    //copy character in string to a character array 
    //2nd parameter is length of how many is to be copied 
    //3rd parameter is position from where to start coping
    cout<<"Char ARRAY :"<<arr<<endl;
    
    s.swap(s2);
    cout<<"After Swapping"<<endl;
    cout<<"s is :"<<s<<endl;
    cout<<"s2 is :"<<s2<<endl;
}