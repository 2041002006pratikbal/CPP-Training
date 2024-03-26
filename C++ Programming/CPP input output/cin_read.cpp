// C++ program to illustrate the use 
// of cin.get() 
#include <iostream> 
using namespace std; 

// Driver Code 
int main() 
{ 
	char arr[30];
	cin.read(arr,10);   //reads the number of character from the char array

	// Print ch 
	cout << arr; 
}
