
#include<iostream>
#include<string>
#include<sstream>

using namespace std;
void substring(string s,int n){
    for (int i = 0; i < n; i++)
		for (int j = 1; j <= n - i; j++)
			cout << s.substr(i, j) << endl;
}
int main(){
    string s;
    getline(cin,s);
    int n=s.length();
    substring(s,n);
    
}
