#include <iostream> 
using namespace std; 

int main() 
{ 
    int x=3;
    int y=4;
    int z=5;
    int arr[x][y][z];
    for(int i=0;i<x;i++){   //initialization of array
        for(int j=0;j<y;j++){
            for(int k=0;k<z;k++){
                arr[i][j][k]=i+j+k;
            }
        }
    }
    
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            for(int k=0;k<z;k++){
                cout<<arr[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    int arr1[2][2][2]={{{0,1},{0,1}},{{3,4},{3,4}}};    //manual declaration of array
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            for(int k=0;k<2;k++){
                cout<<arr1[i][j][k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
  
    return 0; 
}