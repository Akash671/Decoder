/* author : @akashsaini */

#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#define ll long long int
using namespace std;

int solve(int n,int k,int a[])
{
	vector<int>v;
	int s=0;
	// 2 1 3 4
	// s=2+1+3
	// 
	for(int i=0;i<=n-k;++i)
	{
		for(int j=i;j<i+k;++j)
		{
			s+=a[j];
		}
		//cout<<s<<" ";
		v.push_back(s);
		s=0;
	}
	int m=*std::max_element(v.begin(),v.end());
	return m;
	
}


int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	cout<<solve(n,k,a)<<"\n";
}

