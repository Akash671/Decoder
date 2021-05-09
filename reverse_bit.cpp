/* author : @akashsain */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll  decimal_to_bin(ll n)
{
	ll bin=0,pow=1;
	while(n)
	{
		ll r=n%2;
		bin+=r*pow;
		pow*=10;
		n=n/2;
	}
	return bin;
}

ll reverse(ll bin)
{
    ll rev=0,r;
	while(bin)
	{
	   r=bin%10;
	   rev=rev*10+r;
	   bin=bin/10;
	}
	return rev;
}

ll binary_to_decimal(ll n)
{
	ll base=1;
	ll d=0;
	ll r;
	while(n)
	{
		r=n%10;
		d+=r*base;
		n=n/10;
		base=base*2;
	}
	return d;
}

ll solve(ll n)
{
   ll bin=decimal_to_bin(n);
   ll rev=reverse(bin);
   ll ans=binary_to_decimal(rev);
   return ans;
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		cout<<solve(n)<<"\n";
	}
	return 0;
}
