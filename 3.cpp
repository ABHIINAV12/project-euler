#include <bits/stdc++.h>
#define ff first
#define ss second
using namespace std;
#define MP make_pair
#define PB push_back
#define ll long long
#define int long long
#define f(i,x,n) for(int i=x;i<n;i++)
#define ld long double
#define mod 998244353
 
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n=600851475143;
    int ans;
    int c=n;
    for(int i=3;i<n;i+=2)
    {
    	if(c==1)
    		break;
    	if(c%i==0)
    	{
    		ans=i;
    		while(c%i==0)
    			c/=i;
    	}
    }
    cout<<ans;
    return 0;
}


