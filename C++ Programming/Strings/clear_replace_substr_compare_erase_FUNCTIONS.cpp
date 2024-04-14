#include<iostream>
#include<sstream>
#include<cstring>   //for strcat()
using namespace std;

int main(){
    string s;
    string s2;
    string s3="HI ALL";
    getline(cin,s);
    getline(cin,s2);
    cout<<"s is :"<<s<<endl;
    cout<<"s2 is :"<<s2<<endl;
    cout<<"s3 is :"<<s3<<endl;
    cout<<"s3 length is :"<<s3.length()<<endl;
    cout<<"s3 capacity is :"<<s3.capacity()<<endl;
    
    s3.clear();
    cout<<"s3 is :"<<s3<<endl;
    cout<<"s3 length is :"<<s3.length()<<endl;
    //length becomes 0
    cout<<"s3 capacity is :"<<s3.capacity()<<endl;
    //capacity remains same
    
    /*
    strcat(s2,s);   //stores in s2 i.e 1st string
    cout<<"Concatinating s and s2 :"<<s2<<endl;
    */
    
    cout<<"After replacing :"<<s.replace(2,3,"THIS IS REPLACED SENTENCE")<<endl;
    
    cout<<"new Substring is :"<<s.substr(2,3)<<endl;
    
    int compare_result=s.compare(s2);
    cout<<"Comparison result is :"<<compare_result<<endl;
    
    cout<<"After erase() s2 is :"<<s2.erase(2,3)<<endl;
    
}