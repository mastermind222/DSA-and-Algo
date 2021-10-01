ll fac[200005];

ll power(ll x,ll y,ll p)
{
    ll res = 1;
 
    x = x % p; 
 
    while (y > 0) 
    {
     
        if (y & 1){
        	res = (res * x) % p;
        }
        y = y >> 1; 
        x = (x * x) % p;
    }
    return res;
}
 
ll modInverse(ll n,ll p)
{
    return power(n, p - 2, p);
}
 
ll nCr(ll n,ll r, ll p)
{
    if (n < r){
    	return 0;
    }
        
    if (r == 0){
    	return 1;
    }

    return (fac[n] * modInverse(fac[r], p) % p* modInverse(fac[n - r], p) % p)% p;
}

// initialize the fac array by calling this function once
void init(){
    fac[0] = 1;
    for (ll i = 1; i < 200005; i++){
    	fac[i] = (fac[i - 1] * i) % mod1;
    }
}
