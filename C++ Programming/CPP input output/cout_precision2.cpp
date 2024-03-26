#include <iostream> 
using namespace std; 

// Driver Code 
int main() 
{ 
	double d=789.98819899821213;
	cout<<"Default Precision is "<<d<<endl;
	cout.precision(3);
	cout<<"Precision is 3 :"<<d<<endl;
	cout.precision(10);
	cout<<"Precision is 10 :"<<d<<endl;
}