void eulerPhi(ll n){

	ll phi[n+1];

	for(ll i=1;i<=n;i++){
		phi[i] = i;
	}

	for(ll i=2;i<=n;i++){
		if(phi[i] == i){
			phi[i] = i-1;
			for(ll j=2*i;j<=n;j+=i){
				phi[j] = (phi[j]*(i-1))/i;
			}
		}
	}

	for(ll i=1;i<=n;i++){
		cout << "Euler Totient Phi For " << i << "Is :" << phi[i]<<endl;
	}

}
