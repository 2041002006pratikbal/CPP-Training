/*
#include<iostream>
using namespace std;
struct Demo{
    int i=1;
    int j=5;
    char a='a';
    bool b=true;
};

int main(){
    Demo d;
    cout<<d.i<<endl;
    cout<<d.j<<endl;
    cout<<d.a<<endl;
    cout<<d.b<<endl;

    int * intPtr=reinterpret_cast<int *>(&d);
    cout<<sizeof(d)<<endl;
    cout<<endl;
    cout<<intPtr<<endl;
    cout<<*intPtr<<endl;
    intPtr++;
    cout<<intPtr<<endl;
    cout<<*intPtr<<endl;
    /*intPtr++;
    cout<<intPtr<<endl;
    cout<<*intPtr<<endl;

    intPtr--;
    *//*
    char *charPtr=reinterpret_cast<char *>(intPtr);
    //charPtr++;
    cout<<charPtr<<endl;
    cout<<*charPtr<<endl;
    charPtr++;
    bool * boolPtr=reinterpret_cast<bool *>(charPtr);
    cout<<boolPtr<<endl;
    cout<<*boolPtr<<endl;

}
*/

#include <iostream>
struct MyStruct {
    int x;
    int y;
    char c;
    bool b;
};
int main() {
    MyStruct s;
    s.x = 5;
    s.y = 10;
    s.c = 'a';
    s.b = true;

    // Reinterpret the struct pointer as an int pointer
    int* p = reinterpret_cast<int*>(&s);
    std::cout << "Size of MyStruct: " << sizeof(s) << " bytes" << std::endl;
    std::cout << "Value at p (int): " << *p << std::endl;

    // Move the pointer to the next int (y)
    p++;
    std::cout << "Value at p (int, after increment): " << *p << std::endl;

    // Reinterpret the pointer as a char pointer
    char* ch = reinterpret_cast<char*>(p);
    std::cout << "Value at ch (char): " << *ch << std::endl;

    // Move the pointer to the boolean (b)
    ch++;
    // Since (*ch) now points to a boolean value, we need to access it using the same type conversion
    bool* n = reinterpret_cast<bool*>(ch);
    std::cout << "Value at n (bool): " << *n << std::endl;

    return 0;
}
