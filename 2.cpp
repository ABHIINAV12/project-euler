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
    int a,b,c,sum;
    sum=2;
    a=1;
    b=2;
    while(true)
    {
    	c=a+b;
    	if(c<4000000 && c%2==0)
    		sum+=c;
    	if(c>=4000000)
    		break;
    	a=b;
    	b=c;
    }
    cout<<sum;
    return 0;
}


