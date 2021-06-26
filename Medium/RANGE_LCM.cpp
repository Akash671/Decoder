/* author : @akash */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double

int LCM(int a,int b)
{
	return a*b/__gcd(a,b);
}

void solve()
{
   int a;
   int b;
   cin>>a>>b;
   int ans=a;
   for(int i=a+1;i<=b;++i)
   {
   	ans=LCM(ans,i);
   }
   cout<<ans;
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
