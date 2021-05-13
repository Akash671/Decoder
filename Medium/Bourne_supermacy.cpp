/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

string solve(int n,vector<int>a,int s,int d)
{
    int ii=a[s];
	for(int i=0;i<n;++i)
	{
	    //ii=a[s];
		if(ii==d)
		{
			return "Yes";
		}
		else
		{
			ii=a[ii];
		}
	}
	return "No";
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<int>a(n);
		for(int i=0;i<n;++i)
		{
			cin>>a[i];
		}
		int s,d;
		cin>>s>>d;
		cout<<solve(n,a,s,d)<<"\n";
	}
	return 0;
}
