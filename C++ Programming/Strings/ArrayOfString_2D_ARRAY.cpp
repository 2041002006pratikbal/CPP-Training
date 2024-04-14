//it is used where we know what can be the maximum space 
//required by any string
//memory is allocated in a contiguous manner
//lot of memory wastage
//strings are immutable
#include<iostream>
#include<sstream>
#include<cstring>
#include<string>
using namespace std;
int main(){
    //here no. of rows can be easily identified by compiler
    // no. of column should be specified so as to allocate the memory.
    // size of strings once allocated cannot be changed.
    char string_arr[][10]={"Hi","All","Its is my","Room 207"};
    //cannot contain string of more than the specified size
    
    for(int i=0;i<4;i++){
        cout<<string_arr[i]<<" ";
    }
}