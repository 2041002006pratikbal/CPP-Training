#include <iostream> 
using namespace std; 
  

void printArraySized(int arr[3], int n) 
{ 
    cout << "Array as Sized Array Argument: "; 
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " "; 
    } 
    cout << endl; 
} 
  

void printArrayUnsized(int arr[], int n) 
{ 
    cout << "Array as Unsized Array Argument: "; 
    for (int i = 0; i < n; i++) { 
        cout << *(arr + i) << " "; 
    } 
    cout << endl; 
} 
  
 
void printArrayPointer(int* ptr, int n) 
{ 
    // Print array elements using pointer ptr 
    // that store the address of array passed 
    cout << "Array as Pointer Argument: "; 
    for (int i = 0; i < n; i++) { 
        cout << ptr[i] << " "; 
    } 
} 
  

int main() 
{ 
    int n=6;
    int arr[n] = { 10, 20, 30,3,2,5,7 }; 
    //7 is ignored .
  
    
    printArraySized(arr, n); 
    printArrayUnsized(arr, n); 
    printArrayPointer(arr, n); 
  
    return 0; 
}