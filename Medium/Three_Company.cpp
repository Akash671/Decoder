/* author : @akashsaini */

#include<bits/stdc++.h>
using namespace std;

string solve(int n,string s)
{
    string S="";
    for(int i=0;i<n;++i)
    {
        for(int j=0;j<3;++j)
        {
            S+=s[i];
        }
    }
    return S;
}

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<solve(n,s)<<"\n";
    return 0;
}
