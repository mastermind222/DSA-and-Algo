
// Problem : C. Nastya and Strange Generator
// Contest : Codeforces - Codeforces Round #637 (Div. 2) - Thanks, Ivan Belonogov!
// URL : https://codeforces.com/contest/1341/problem/C
// Memory Limit : 0 MB
// Time Limit : 0 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
#define int long long
#define ios std::ios::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define pb push_back
#define mod 1000000007
#define lld long double
#define mii map<int, int>
#define mci map<char, int>
#define msi map<string, int>
#define pii pair<int, int>
#define ff first
#define ss second
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define rep(i,x,y) for(int i=(int)x; i<y; i++)
#define fill(a,b) memset(a, b, sizeof(a))
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
using namespace std;
const long long N=100005, INF=1e18;
void solve()
{
	int n; cin>>n;
	int a[n],cc[n];
	//rep(i,0,n) cin>>cc[i];
	bool b[n];
	rep(i,0,n) b[i]=false;


		int count[n]={0};
		int min=-1;
		int maxx=0;
		for(int j=n-1;j>=0;j++)
		{
			if(!b[j])
			{
				maxx=j;
				break;
			}
		}
		for(int j=maxx;j>=0;j++)
		{
			if(!b[j])
			{
				min=j+1;
			}
            count[min-1]++;
		}

	for(int j=0;j<n;j++) cout<<count[j]<<" "; cout<<endl;

}
int32_t main()
{
	//ios;
	int t;
	cin>>t;
	while(t--) solve();
}
