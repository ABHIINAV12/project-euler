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
int rev(int a)
{
	int s=0;
	while(a!=0)
	{
		s+=a%10;
		a/=10;
		s*=10;
	}
	return s/10;
}
int palin(int a)
{
	if(a==rev(a))
		return 1;
	return 0;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int ans=-1;
    for(int i=100;i<1000;i++)
    	for(int j=i;j<1000;j++)
    	{
    		int x=i*j;
    		if(palin(x))
    		{
    			if(x>ans)
    				ans=x;
    		}
    	}
    cout<<ans;
    return 0;
}


