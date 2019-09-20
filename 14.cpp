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
#define mod 1000000007
int func(int a)
{
    int d=1;
    while(a!=1)
    {
        if(a%2==0)
            a/=2;
        else
            a=3*a+1;
        d++;
    }
    return d;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int mp=0;
    int ans;
    for(int i=1;i<1000000;i++)
    {
        int xp=func(i);
        if(xp>mp)
        {
            mp=xp;
            ans=i;
        }
    }
    cout<<ans;
    return 0;
}
