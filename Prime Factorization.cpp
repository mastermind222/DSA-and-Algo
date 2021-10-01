vector<pr> primeFactors(ll n)  
{  
    // Print the number of 2s that divide n
    vector<pr> c;
    ll cnt=0;  
    while (n % 2 == 0)  
    {  
        cnt++;  
        n = n/2;  
    }  
    if(cnt>0){
    	c.pb({2,cnt});
    }
  
    // n must be odd at this point. So we can skip  
    // one element (Note i = i +2)  
    for (ll i = 3; i*i <= (n); i = i + 2)  
    {  
        // While i divides n, print i and divide n
        cnt=0;  
        while (n % i == 0)  
        {  
            cnt++; 
            n = n/i;  
        }  
        if(cnt>0){
        	c.pb({i,cnt});
        }
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)  {
    	c.pb({n,1});
    }
        
    return c;
}
