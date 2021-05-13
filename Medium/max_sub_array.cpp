
/* author : @akashsaini */


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	int v[n];
	for(int i=0;i<n;++i)
	{
		if(a[i]>0)
		{
		   v[i]=a[i];
		}
		else
		{
			v[i]=-1;
		}
	}
	for(int i=0;i<n;++i)
	{
	    if(v[i]==-1)
	    {
	    	break;
	    }
	    else
	       {
	          cout<<v[i]<<" ";
	       }
	}
	cout<<"\n";
	return 0;
}
