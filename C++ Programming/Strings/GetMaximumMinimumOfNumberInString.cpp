
#include <iostream>
#include<sstream>
#include<string>
#include<vector>
#include<cstring>
#include<bits/stdc++.h>

using namespace std;
int getMaximumMinimumOfNumberInString(string s){
    vector<int>v;
    for(int i=0;i<s.length();i++){
        for(int len=1;len<=s.length()-i;len++){
            string sub=s.substr(i,len);
            int x=stoi(sub);
            v.push_back(x);
        }
    }
    cout<<*max_element(v.begin(),v.end())<<endl;
    cout<<*min_element(v.begin(),v.end())<<endl;
    return 0;
}
int main() {
    string s="1234";
    getMaximumMinimumOfNumberInString(s);
    return 0;
}
