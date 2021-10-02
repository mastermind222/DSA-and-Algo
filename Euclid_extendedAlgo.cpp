#include<bits/stdc++.h>
using namespace std;
#define builtin_gcd __gcd

int gcd(int a, int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}

int main()
{
	cout << gcd(252,105) << endl;
	cout << builtin_gcd(252,105) << endl;
	return 0;
} 