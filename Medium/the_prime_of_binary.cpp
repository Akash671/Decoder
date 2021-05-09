/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int bin_to_dec(int n)
{
	int base=1;
	int r;
	int d=0;
	while(n)
	{
		r=n%10;
		d+=r*base;
		n=n/10;
		base=base*2;
	}
	return d;
}

int prime(int n)
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

void solve(int n)
{
	int ans=bin_to_dec(n);
	cout<<ans<<"\n";
	if(prime(ans))
	{
		cout<<"Prime";
	}
	else
	{
		cout<<"Not Prime";
	}
}

int main()
{
	int n;
	cin>>n;
	solve(n);
	cout<<"\n";
	return 0;
}
