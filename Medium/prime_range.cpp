/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int prime(ll n)
{
	if(n==1)
	{
		return 0;
	}
	else if(n==2)
	{
		return 1;
	}
	else
	{
		for(int i=2;i<=n/2;++i)
		{
			if(n%i==0)
			{
				return 0;
			}
		}
		return 1;
	}
}

void solve(ll L,ll R)
{
	for(ll i=L;i<=R;++i)
	{
		if(prime(i))
		{
			cout<<i<<" ";
		}
	}
}

int main()
{
	ll L,R;
	cin>>L>>R;
	solve(L,R);
	cout<<endl;
	return 0;
}
