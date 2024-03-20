#include<iostream>
using namespace std;
int x=10;
//cout <<"Global Function Outside "<<x;
int main(){
    int x=99;
    cout<<"Local Function"<<x;
    cout<<"\nGlobal Function from inside"<<::x;
    cout<<"\n Global varible from inside "<<::x<<std::endl;
  return 0;
}