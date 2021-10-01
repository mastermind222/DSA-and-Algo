ll modExp(ll a,ll b,ll p)
{
    if(a==0)
        return 0;
    if(b==0)
        return 1;
    ll ans;
    if(b%2==0)
    {
        ll smallAns=modExp(a,b/2,p);
        ans=(smallAns*smallAns)%p;
    }
    else
    {
        ll smallAns=modExp(a,b-1,p);
        ans=a%p;
        ans=(ans*smallAns)%p;
    }
    return (ans+p)%p;
}
