// https://codeforces.com/problemset/problem/1030/A

#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int a, count = 0;
    cin >> a;
    vector<int> ar(a);
    for(int i = 0; i < a; i++){
        cin >> ar[i];
        if(ar[i] == 1){
            count++;
        }
    }
    if(count == 0){
        cout << "EASY";
    }
    else{
        cout << "HARD";
    }
}

/*
Input
3
0 0 1

Output
HARD
*/
