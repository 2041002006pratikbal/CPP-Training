#include<iostream>
using namespace std;
int search(int num, int arr[], int size){
    for (int i=0;i<size;i++){
        if (arr[i]==num){
            return i+1;
        }
    }
    return 0;
}
int main(){
    int arr[]={1,3,2,4,5,6};
    int size=(sizeof(arr)/sizeof(arr[0]));
    int num;
    cin>>num;
    int result=search(num,arr,size);
    if (result <= 0){
        cout<<"Element not found in the ARRAY"<<endl;

    }
    else{
        cout<<"Element found at "<<result<<" position";
    }

    return 0;
}