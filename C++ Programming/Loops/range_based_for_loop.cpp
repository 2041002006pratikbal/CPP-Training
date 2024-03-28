// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    int arr[] {1,3,5,7,9};  //we can use = operator also
    for(auto i:arr){
        cout<<i<<endl;
    }
    cout<<endl;
    vector <int>v={2,4,6,83,7};
    for(int i:v){
        cout<<i<<endl;
    }
    return 0;
}