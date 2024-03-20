#include<iostream>
using namespace std;
int main(){
    int arr[5];
    arr[0]=2;
    arr[2]=45;
    arr[5/3]=4;
    arr[1*3]=3;

    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3]<<" "<<arr[4];
}