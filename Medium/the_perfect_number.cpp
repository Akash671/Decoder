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
   ll n;
   cin>>n;
   ll ans=1;
   for(int i=2;i<=n/2+1;++i)
   {
   	if(n%i==0)
   	{
   		ans+=i;
   	}
   }
   if(ans==n)
   {
   	cout<<"True";
   }
   else
   {
   	cout<<"False";
   }
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
            solve();
            cout<<"\n";	    
	}
	return 0;
}

// time complexity of this algorithm is : T(n)=O()
