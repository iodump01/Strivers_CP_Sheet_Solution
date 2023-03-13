// https://codeforces.com/problemset/problem/1353/A

#include<bits/stdc++.h>
using namespace std;
void solve() {
    long long int n , k ;
    cin >> n >> k ;
    if( n == 1 ){
        cout << 0 << endl ;
    }
    else if ( n == 2){
        cout << k << endl ;
    }
    else {
        cout << 2*k << endl ;
    }
}

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}

/*
Input
5
1 100
2 2
5 5
2 1000000000
1000000000 1000000000

Output
0
2
10
1000000000
2000000000
*/