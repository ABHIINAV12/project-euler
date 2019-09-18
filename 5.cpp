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
    int x=2520;
    x*=11;
    x*=13;
    x*=17;
    x*=19;
    for(int i=x;;i++)
    {
    	if(i%20==0 && i%19==0 && i%18==0 && i%17==0 && i%16==0 && i%14==0 && i%13==0 && i%11==0)
    	{
    		cout<<i;
    		return 0;
    	}
    }
    return 0;
}


