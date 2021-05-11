/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

string rev(string s)
{
	string ss="";
	int n=s.size();
	for(int i=0;i<n;++i)
	{
		ss+=s[n-i-1];
	}
	return ss;
}

int main()
{
	int n;
	cin>>n;
	vector<string>a(n);
	for(int i=0;i<n;++i)
	{
		cin>>a[i];
	}
	//vector<string>b;
	string s="";
	int flag=0;
	for(int i=0;i<n-1;++i)
	{
		for(int j=i+1;j<n;++j)
		{
			if(a[i]==rev(a[j]))
			{
			   //  b.push_back(a[i]);
			     s+=a[i];
			     flag=1;
			     break;
			}
		}
		if(flag)
		{
			break;
		}
	}
	int m=s.size();
	cout<<m<<" "<<s[m/2]<<"\n";
	return 0;
}
