/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

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

int solve(int p,int n,vector<int>a)
{
    int ans=0;
	for(int i=0;i<n;++i)
	{
		if(prime(a[i]))
		{
			ans++;
		}
	}
	return ans;
}

int main()
{
	int p;
	cin>>p;
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	cout<<solve(p,n,a)<<"\n";
	return 0;
}
