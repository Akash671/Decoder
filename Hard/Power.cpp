/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;


void solve(int n,long long int a[])
{
        // 1 3 4
        //
		for(int i=0;i<n;++i)
		{
			int m=a[i];
			int flag=1;
			for(int j=1;j<=m/2+1;++j)
			{
				if(pow(j,j)==m)
				{
					cout<<"Yes"<<" ";
					flag=0;
					break;
				}
			}
			if(flag)
			{
				cout<<"No"<<" ";
			}
		}
}

int main()
{
	int n;
	cin>>n;
	long long int a[n];
	for(int i=0;i<n;++i)
		{
			cin>>a[i];
		}
	        solve(n,a);
		cout<<"\n";
}


