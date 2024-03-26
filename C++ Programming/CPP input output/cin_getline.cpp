#include<iostream>
using namespace std;
int main(){
    int buffer_size=10;
    char buffer[buffer_size];
    cin.getline(buffer,buffer_size);
    cout<<buffer<<endl;
}