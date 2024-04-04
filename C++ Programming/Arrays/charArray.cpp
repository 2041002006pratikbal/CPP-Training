
#include <iostream>
using namespace std;
int main() {
    int size=100;
    char arr[]="Hello World";
    cout<<arr<<endl;
    
    
    char arr2[size];
    cin.getline(arr2,size);
    for (int i=0;arr2[i]!='\0';++i){
        cout<<"'"<<arr2[i]<<"'"<<" ";
    }
    return 0;
}