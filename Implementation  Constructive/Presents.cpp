// https://codeforces.com/problemset/problem/136/A

#include <bits/stdc++.h> 
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a;
    cin >> a;
    vector<int> arr(a);
    for(int i = 0; i < a; i++){
        cin >> arr[i];
    }
    for(int j = 1; j <= a; j++){
        for(int i = 0; i<a; i++){
            if(arr[i] == j){
                cout << i + 1 << " ";
            }
        }
    }
}

/*
Input
4
2 3 4 1

Ouput
4 1 2 3
*/