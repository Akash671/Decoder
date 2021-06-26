/* author : @akash */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


void solve()
{
  int n;
  int m;
  cin>>n>>m;
  int a[n];
  for(int i=0;i<n;++i)
  {
  	cin>>a[i];
  }
  //int ans=0;
  for(int i=0;i<n-1;++i)
  {
  	for(int j=i+1;j<n;++j)
  	{
  		if(a[i]+a[j]==m)
  		{
  			cout<<"Yes";
  			exit(0);
  		}
  	}
  }
  cout<<"No";
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    solve();
    cout<<"\n";	    
	return 0;
}
