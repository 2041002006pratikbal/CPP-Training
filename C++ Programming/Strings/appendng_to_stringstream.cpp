#include <iostream> 
#include <sstream>
using namespace std; 

int main() 
{ 

    stringstream obj;

    obj << " hello";
    obj << "hi";
    obj<<"pratik";

    cout << obj.str();
    return 0; 
} 
