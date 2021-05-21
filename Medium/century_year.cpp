/* author : @akash kumar */


#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define mod 1000000007
#define pb push_back

void solve(int n)
{
   if(n<100)
   {
   	cout<<"1st";
   }
   else if(n>=100 && n<=199)
   {
   	cout<<"2nd";
   }
   else if(n>=200 && n<=299)
   {
   	cout<<"3rd";
   }
   else if(n>=300 && n<=399)
   {
   	cout<<"4th";
   }
   else if(n>=400 && n<=499)
   {
   	cout<<"5th";
   }
   else if(n>=500 && n<=599)   
   {
   	cout<<"6th";
   }
   else if(n>=600 && n<=699)
   {
   	cout<<"7th";
   }
   else if(n>=700 && n<=799)
   {
   	cout<<"8th";
   }
   else if(n>=800 && n<=899)
   {
   	cout<<"9th";
   }
   else if(n>=900 && n<=999)
   {
   	cout<<"10th";
   }
   else if(n>=1000 && n<=1099)
   {
   	cout<<"11th";
   }
   else if(n>=1100 && n<=1199)
   {
   	cout<<"12th";
   }
   else if(n>=1200 && n<=1299)
   {
   	cout<<"13th";
   }
   else if(n>=1300 && n<=1399)
   {
   	cout<<"14th";
   }
   else if(n>=1400 && n<=1499)
   {
   	cout<<"15th";
   }
   else if(n>=1500 && n<=1599)
   {
   	cout<<"16th";
   }
   else if(n>=1600 && n<=1699)
   {
   	cout<<"17th";
   }
   else if(n>1700 && n<=1799)
   {
   	cout<<"18th";
   }
   else if(n>=1800 && n<=1899)
   {
   	cout<<"19th";
   }
   else if(n>=1900 && n<=1999)
   {
   	cout<<"20th";
   }
   else if(n>=2000 && n<=2099)
   {
   	cout<<"21st";
   }
   else if(n>=2100 && n<=2199)
   {
   	cout<<"22nd";
   }
   else if(n>=2200 && n<=2299)
   {
   	cout<<"23rd";
   }
   else if(n>=2300 && n<=2399)
   {
   	cout<<"24th";
   }
   else if(n>=2400 && n<=2499)
   {
   	cout<<"25th";
   }
   else if(n>=2500 && n<=2599)
   {
   	cout<<"26th";
   }
   else if(n>=2600 && n<=2699)
   {
   	cout<<"27th";
   }
   else if(n>=2700 && n<=2799)
   {
   	cout<<"28th";
   }
   else if(n>=2800 && n<=2899)
   {
   	cout<<"29th";
   }
   else
   {
   	cout<<"30th";
   }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)		
    {
    	int n;
    	cin>>n;
    	solve(n);
    	cout<<"\n";
    }
	return 0;
}
