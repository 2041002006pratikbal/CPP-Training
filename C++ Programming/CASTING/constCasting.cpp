#include<iostream>
using namespace std;
class Cow{
    public:
    void saySomething(){
        cout<<"Animal Sound"<<endl;
    }
};

void f(Cow*c){
    c->saySomething();
}

int main(){
    const Cow * c =new Cow;
    //f(c);
    // Cow* c2=c;   //Shows error because cannot assign a const pointer to non-const pointer
    Cow*c2=const_cast<Cow *>(c);
    f(c2);
    //or
    f(const_cast<Cow*>(c));

    delete c;
    delete c2;  //not required as both c and c2 refer to sam ememory location
    return 0;
}