#include<iostream>
using namespace std;
class Demo{
    public:
    static int z;
    int a=4;
    static int staticFunc(int x, int y){
        return x+y+z;
        //return x+y+a; // static function cannot access the non static member 
    }
    int normalFunc(int x,int y){
        return x+y;
    }
};
int Demo::z=8;

int main(){
    cout<<Demo::staticFunc(4,5)<<endl;  
    //static function can directly be accessed by the class_name along with scope resolution operator ::
    Demo obj;
    cout<<obj.normalFunc(4,5)<<endl;

}