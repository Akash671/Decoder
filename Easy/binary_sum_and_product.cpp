
#include<bits/stdc++.h>
using namespace std;


void solve1(int n)
{
   int binary = 0, pow = 1;

    while (n > 0)
    {
        int lastBit = n % 2;
        binary += lastBit * pow;
        pow *= 10;
        n = n / 2;
    }
    cout<<binary;
}

void solve(int a,int b)
{
    vector<int>v;
    //int a[2];
    for(int i=0;i<2;++i)
  {
    int base=1;
    int d=0;
    int r;
    int n;
    if(i==0)
        int n=a;
    else
        int n=b;
    while(n)
    {
        r=n%10;
        d+=r*base;
        n=n/10;
        base=base*2;
    }
    v.push_back(d);
   }
   int ADD=v[0]+v[1];
   int MUL=v[0]*v[1];
   solve1(ADD);
   cout<<"\n";
   solve1(MUL);
    //return d;
}

int main()
{
    int a,b;
    cin>>a>>b;
    solve(a,b);
    cout<<"\n";
    return 0;
}
