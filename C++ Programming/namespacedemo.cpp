#include <iostream>
using namespace std;
namespace n1 {
    int x = 2;
    void fun() {
        cout << "This is fun() of n1" << endl;
    }
}

using namespace n1;

int main() {
    cout << x << endl;
    fun();
    return 0;
}

