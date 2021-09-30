#include <bits/stdc++.h>

using namespace std;

const int N = 100005;
const int MOD = 1e9 + 7;

#define show(arr)                                                              \
    {                                                                          \
        for (auto x : arr)                                                     \
            cout << x << " ";                                                  \
        cout << '\n';                                                          \
    }

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int randNo(int lower_limit, int upper_limit) {

    return lower_limit + rng() % (upper_limit - lower_limit);
}

int solve(int arr[], int n) {
    int ans = 0;

    // write here your optimed code with low complexity

    return ans;
}

int solve2(int arr[], int n) {
    int ans = 0;

    // write here your brute force solution

    return ans;
}

int32_t main() {

    int testCases = 1000000;
    while (testCases--) {

        // generating n
        int n = randNo(1, 100);

        // To generate a random array
        int a[n];
        for (int i = 0; i < n; i++)
            a[i] = randNo(1, N);

        int naive_ans = solve2(a, n);
        int optimised_ans = solve(a, n);

        if (naive_ans == optimised_ans)
            cout << "YES\n";
        else {
            cout << "NO\n";
            cout << n << '\n';
            show(a);
            cout << naive_ans << '\n';
            cout << optimised_ans << '\n';
            break;
        }
    }
}