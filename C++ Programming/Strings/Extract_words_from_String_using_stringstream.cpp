#include <iostream> 
#include <sstream>
using namespace std; 

int main() 
{ 
    string s;
    getline(cin,s); //takes line input from user
    string temp;    //temp var is created to store the word
    // can also be char temp to print the characters
    stringstream obj(s);    //stringstream object is created and initialized with s
    
    while(obj>>temp){   /*here words are extracted from 
    the object of stringstream which is already 
    initialized with string s and then an internal state
     is maintained which holds the current position 
     ....the extration stops if it finds a space or
      new line elements like tab or \n or space*/
    //it goes word by word
        cout<<temp<<endl;
    }   //loop continues till you there is no more word in obj
    return 0; 
}