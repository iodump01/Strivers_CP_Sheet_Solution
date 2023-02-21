// https://codeforces.com/problemset/problem/282/A

#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int t;
    cin>>t;
    int x = 0;
    while(t--){
    string a;
    cin>>a;
    if(a == "X++" || a == "++X")x++;
    else x--;
    }
    cout<<x<<endl;
    return 0;
}