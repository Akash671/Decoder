/* author : @akashsaini */

#include<iostream>
using namespace std;

int main()
{
	int mw;
	int v1,w1;
	int v2,w2;
	cin>>mw;
	cin>>v1>>w1;
	cin>>v2>>w2;
	if(w1+w2<=mw)
	{
		cout<<v1+v2<<"\n";
	}
	else
	{
		if(w1<=mw && w2>mw)
		{
			cout<<v1<<"\n";
		}
		else if(w2<=mw && w1>mw)
		{
			cout<<v2<<"\n";
		}
		else
		{
			if(w1<=mw && w2<=mw)
			{
				if(v1<v2)
				{
					cout<<v2<<"\n";
				}
				else
				{
					cout<<v1<<"\n";
				}
			}
		}
	}
	return 0;
}

