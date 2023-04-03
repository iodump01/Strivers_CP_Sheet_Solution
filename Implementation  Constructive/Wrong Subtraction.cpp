// https://codeforces.com/problemset/problem/977/A

#include <iostream>
using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	for(int i = 0; i < K; ++i)
	{
		if(N % 10 == 0)
		{
			N /= 10;
		}
		else
		{
			--N;
		}
	} 
	
	cout << N << endl;

    return 0;
}

/*
Input
512 4

Output
50
*/