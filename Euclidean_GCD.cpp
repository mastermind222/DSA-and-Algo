/*
Basic Euclidean Algorithm for GCD :- 
1. If we subtract a smaller number from a larger (we reduce a larger number), GCD doesn’t change. 
So if we keep subtracting repeatedly the larger of two, we end up with GCD.
2. Now instead of subtraction, if we divide the smaller number, the algorithm stops when we find remainder 0.

Time Complexity - O(Log min(a, b))
Space Complexity - O(1)
*/


#include <bits/stdc++.h> //header file that includes every standard library.
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    int a = 35, b = 10;
    cout << "GCD(" << a << ", "<< b << ") = " << gcd(a, b)<< endl;
    return 0;
}
