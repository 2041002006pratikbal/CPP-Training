#include <iostream> 
using namespace std; 

int main() 
{ 
    char c[]={'h','i','!','\0'};    //c-style string
    char c1[]="Hi World";   
    char c2[5]={'g','o','o','d','\0'};  //no. of initializers should be equal to the no. of arguments given.
    char c3[8]="Morning";   //should be equal to no. of character + 1
    string str="My name is Pratik"; //c++ style string
    string str1("Hello");
    
    cout<<c<<endl;
    cout<<c1<<endl;
    cout<<c2<<" "<<c3<<endl;
    cout<<str<<endl;
    cout<<str1<<endl;
    return 0; 
}