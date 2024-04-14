#include<iostream>
#include<sstream>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    cout<<"Original: "<<s<<endl;
    cout<<"Length of s is : "<<s.length()<<endl;;
    cout<<"Capacity of s is : "<<s.capacity()<<endl;    // capacity is random can be more or equal
    
    s.resize(5);    //changes length() but not capacity()
    s.resize(35); //once resized  means we cannot get back the lost characters //changes length() & capacity()
    // if size is reduced capacity doesnot change
    //if size is increased capacity remains same till original capcity ,,, if more size is increased it becomes equal to the new size
    
    cout<<"S after resize is : "<<s<<endl;
    cout<<"After resize Length of s is : "<<s.length()<<endl;;
    cout<<"After resize Capacity of s is : "<<s.capacity()<<endl;
    
    s.shrink_to_fit();
    cout<<"S after shrink is : "<<s<<endl;
    cout<<"After shrink Length of s is : "<<s.length()<<endl;;
    cout<<"After shrink Capacity of s is : "<<s.capacity()<<endl;
    s.push_back('S');
    cout<<s<<endl;
}