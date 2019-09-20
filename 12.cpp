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
    int pp=0;
    for(int i=1;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            int x=a/i;
            if(x!=i)
                pp+=2;
            else
                pp++;
        }
    }
    return pp;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=1;;i++)
    {
        int tp=i*(i+1);
        tp/=2;
        if(func(tp)>500)
        {
            cout<<tp;
            return 0;
        }
    }
    return 0;
}
