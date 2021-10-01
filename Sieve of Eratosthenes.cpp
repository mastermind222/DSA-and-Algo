ll makeSieve(ll n){

	bool isPrime[n+1];
	for(ll i=0;i<=n;i++){
		isPrime[i] = true;
	}
	isPrime[0] = false;
	isPrime[1] = false;

	for(ll i=2;i*i<=n;i++){
		if(isPrime[i] == true){
			for(ll j=i*i;j<=n;j+=i){
				isPrime[j] = false;
			}
		}
	}

	ll count = 0;
	for(ll i=0;i<=n;i++){
		if(isPrime[i] == true){
			count++;
		}
	}
	return count;
}
