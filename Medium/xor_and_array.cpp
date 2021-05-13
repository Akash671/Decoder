
/* author : @akashsaini */
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int solve(vector<int>a,int n,int k)
{
    int res=a[0];
    for(int i=1;i<n;++i)
    {
        res=res^a[i];
    }
    //cout<<res<<"\n";
    for(int i=k;;++i)
    {
    	if(res^i==k)
    	{
    		return i;
    	}
    }
    return -1;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		vector<int>a(n);
		for(int i=0;i<n;++i)
		{
			cin>>a[i];
		}
		cout<<solve(a,n,k)<<"\n";
	}
	return 0;
}
