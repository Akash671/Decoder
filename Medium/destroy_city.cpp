/* author : @akashsain */

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	cin>>n>>k;
	vector<int>a(n);
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	int ans=1;
	for(int i=0;i<n-1;++i)
	{
		if(abs(a[i]-a[i+1])<=k)
		{
			continue;
		}
		else
		{
			ans++;
		}
	}
	cout<<ans<<"\n";
	return 0;
}
