#include <iostream> 
#include <sstream>  /*header. std::stringstream allows
 you to treat strings as streams, enabling you to 
 perform input and output operations on them just 
like you would with std::cin and std::cout*/
using namespace std; 

int main() 
{ 
    string s;
    getline(cin,s); /*takes a line as input and stores 
    in string var , reads the input until it gets 
    a \n newline character that is till we press enter*/
    cout<<s;
    return 0; 
}