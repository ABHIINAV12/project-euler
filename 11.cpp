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
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[20][20];
    for(int i=0;i<20;i++)
    for(int j=0;j<20;j++)
    cin>>arr[i][j];
    int mx=-1;
    for(int i=3;i<=16;i++)
    {
        for(int j=3;j<=16;j++)
        {
            int a,b,c,d,e,f;
            a=b=c=d=e=f=1;
            a=arr[i][j]*arr[i-1][j]*arr[i-2][j]*arr[i-3][j];
            b=arr[i][j]*arr[i+1][j]*arr[i+2][j]*arr[i+3][j];
            c=arr[i][j]*arr[i-1][j+1]*arr[i-2][j+2]*arr[i-3][j+3];
            d=arr[i][j]*arr[i-1][j-1]*arr[i-2][j-2]*arr[i-3][j-3];
            e=arr[i][j]*arr[i+1][j+1]*arr[i+2][j+2]*arr[i+3][j+3];
            f=arr[i][j]*arr[i+1][j-1]*arr[i+2][j-2]*arr[i+3][j-3];
            mx=max(mx,a);
            mx=max(mx,b);
            mx=max(mx,c);
            mx=max(mx,d);
            mx=max(mx,e);
            mx=max(mx,f);
        }
    }
    cout<<mx;
    return 0;
}
