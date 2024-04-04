
#include <iostream>
using namespace std;
int main() {
    int arr[]={9,3,2,5,6,2};
    cout<<arr<<endl;
    int * ptr=arr;  //because array is also a pointer   //points to 1st element.
    cout<<"Pointer memory "<<ptr<<endl;
    cout<<"Array start memory "<<&arr<<endl;    //uses reference operator & to refer to the memory address
    cout<<"1st element is "<<*ptr<<endl;
    cout<<"Accessing array elements by pointer"<<endl;
    for(int i=0,j=0;i<(sizeof(arr)/sizeof(arr[0]));i++,j++){
        
        cout<<*(arr+j)<<endl;   // * is used to dereference the memory location i.e. to get the value in it;
       // j is used to perform arithmetic operation with pointer.
    }
    
    
    return 0;
}