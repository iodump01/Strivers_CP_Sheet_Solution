// https://codeforces.com/problemset/problem/151/A

#include <bits/stdc++.h> 
using namespace std; 
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    cout << min(min(k * l / nl, c * d), p / np) / n << endl;
    return 0;
}

/*
Input
3 4 5 10 8 100 3 1

Output
2
*/
