// https://codeforces.com/problemset/problem/785/A

#include <bits/stdc++.h> 
using namespace std;
int main()
{
    int a,count=0;
    cin>>a;
    vector<string> arr(a);
    for(int i=0; i<a; i++)
    {
        cin>>arr[i];
        if(arr[i]=="Tetrahedron")
        {
            count+=4;
        }
        else if(arr[i]=="Cube")
        {
            count+=6;
        }
        else if(arr[i]=="Octahedron")
        {
            count+=8;
        }
        else if(arr[i]=="Dodecahedron")
        {
            count+=12;
        }
        else if(arr[i]=="Icosahedron")
        {
            count+=20;
        }
    }
    cout<<count;
}

/*
Input
4
Icosahedron
Cube
Tetrahedron
Dodecahedron

Output
42
*/