#include <iostream>
using namespace std;

int main() {
    double pi = 3.14159265358979323846;
    
    // Output pi with different precisions
    cout << "Default precision: " << pi << endl;
    cout.precision(4); // Set precision to 4 digits after the decimal point
    cout << "Precision set to 4: " << pi << endl;
    cout.precision(10); // Set precision to 10 digits after the decimal point
    cout << "Precision set to 10: " << pi << endl;
    
    return 0;
}
