/* author : @akash */


/* 
problem is:-

*/


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


void solve()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;++i)
   {
   	cin>>a[i];
   }
   int b[n];
   for(int i=0;i<n;++i)
   {
   	cin>>b[i];
   }
   vector<int>v;
   for(int i=0;i<n;++i)
   {
   	v.pb(a[i]);
   }
   for(int i=0;i<n;++i)
   {
   	v.pb(b[i]);
   }
   sort(v.begin(),v.end());
   for(auto i:v)
   {
   	cout<<i<<" ";
   }
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}

// time complexity of this algorithm is : T(n)=O()
