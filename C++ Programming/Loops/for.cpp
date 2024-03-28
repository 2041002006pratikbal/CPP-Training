// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int i=2;
    for (int i=9;i<15;i++){ //i is a local variable for loop
        cout<<"Hi "<<i<<endl;
    }
    cout<<i<<endl;  //doesnot depend on the i inside the loop
    return 0;
}