// https://codeforces.com/problemset/problem/723/A

#include <bits/stdc++.h> 
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	cout << max(max(a, b), c) - min(min(a, b), c) << endl;
	return 0;
}

/*
Input
7 1 4

Output
6
*/