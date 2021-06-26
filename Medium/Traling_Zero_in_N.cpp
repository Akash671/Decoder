/* author : @akash */

#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mod 1000000007
#define ld long double


int findTrailingZeros(int n)
{
    if (n < 0) // Negative Number Edge Case
        return -1;
 
    // Initialize result
    int count = 0;
 
    // Keep dividing n by powers of
    // 5 and update count
    for (int i = 5; n / i >= 1; i *= 5)
        count += n / i;
 
    return count;
}

void solve()
{
   int n;
   cin>>n;
   cout<<findTrailingZeros(n);
}

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    solve();
    cout<<"\n";	    
	return 0;
}
