// Online C++ compiler to run C++ program online
#include <iostream>
#include<algorithm>

using namespace std;
void print(int n){
cout<<n*2<<endl;
}
int main() {
    int arr[] {1,3,4,2,3,1,4};
    for_each(begin(arr),end(arr),print);
    
    return 0;

}
