// https://codeforces.com/contest/514/problem/A

#include<bits/stdc++.h>
using namespace std;
void solve()
{
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++)
    {
        if(i==0 && s[i]=='9')
            continue;
        if(s[i]>'4')
            s[i]='9'-s[i]+'0';
    }
    cout<<s<<endl;
}
 
int main(){
    solve();
    return 0;
}

/*
Input
4545

Output
4444
*/
