/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
using pii=pair<ll,ll>;

#define RALL(x) rbegin(x),rend(x)
#define eb emplace_back

const int maxn=3E5+5;
const int mod=1E9+7;

vector<ll>adj[maxn],subval,val;
vector<pii>ch;

void dfs(ll now,ll lst=-1)
{
	for(auto x:adj[now])
	{
		if(x==lst) continue;
		dfs(x,now);
	}
	ch.clear();
	for(auto x:adj[now])
	{
		if(x!=lst) ch.eb(subval[x],x);
	}
	sort(RALL(ch));
	ll tok=1;
	for(auto [_val,id]:ch) val[id]=tok++;
	for(auto x :adj[now])
	{
		if(x!=lst) subval[now]+=val[x]*subval[x];
	}
}

void solve()
{
	ll n,x;
	cin>>n>>x;
	subval.assign(n,1),val.assign(n,0);
	for(ll i=0;i<n;++i) vector<ll>().swap(adj[i]);
	for(ll i=0;i<n-1;++i)
	{
		ll u,v;cin>>u>>v, --u, --v;
		adj[u].eb(v),adj[v].eb(u);
	}
	dfs(0);
	cout<<subval[0]%mod*x%mod<<"\n";
}

int main()
{
   	int t;
   	cin>>t;
   	while(t--)
   	{
   		solve();
   	}
   	return 0;
}
