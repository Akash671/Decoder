/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;


int main()
{
	int n;
	cin>>n;
    vector<string>key;
	vector<int>v;
	for(int i=0;i<n;++i)
	{
	   string s;
	   int a;
	   cin>>s>>a;
	   key.push_back(s);
	   v.push_back(a);
	}
	int q;
	cin>>q;
	for(int i=0;i<q;++i)
	{
		string sq;
		cin>>sq;
		for(int i=0;i<v.size();++i)
		{
			if(key[i]==sq)
			{
				cout<<v[i]<<"\n";
				break;
			}
		}
	}
	return 0;
}
