    #include<bits/stdc++.h>
    using namespace std;
     
    long int solve(long int a,long int b)
    {
      return __gcd(a,b);
    }
     
    int main()
    {
      long int a,b;
      cin>>a>>b;
      cout<<solve(a,b)<<"\n";
      return 0;
    }
