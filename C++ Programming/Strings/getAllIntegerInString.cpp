#include <iostream>
#include<sstream>
#include<string>
#include<vector>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;
int getAllOfDigits(string s){
    vector<int> v;
    int n=s.length();
    for(int i=0;i<n;i++){
        
            string sub=s.substr(i,1);
            int x=stoi(sub);
            v.push_back(x);
            
        
    }
    for(int ele:v){
        cout<<ele<<endl;
    }
    return 0;
}
int main() {
    string s="1234";
    getAllOfDigits(s);
    return 0;
}