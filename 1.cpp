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
    int sum=0;
    for(int i=0;i<1000;i++)
        if(i%3==0 || i%5==0)
            sum+=i;
    cout<<sum;
    return 0;
}


