/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int>c;
	vector<int>cb;
	int a,b;
	for(int i=0;i<n;++i)
	{
		cin>>a>>b;
		c.push_back(a);
		cb.push_back(b);
	}
	cout<<*max_element(c.begin(),c.end())<<"\n";
	return 0;
}
