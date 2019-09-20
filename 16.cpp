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
int arr[1000];
int32_t main()
{
    arr[0]=1;
    int l=1;
    for(int i=0;i<1000;i++)
    {
        int c=0;
        for(int j=0;j<l;j++)
        {
            arr[j]=(arr[j]*2)+c;
            c=arr[j]/10;
            arr[j]%=10;
        }
        int lp=l;
        while(c!=0)
        {
            arr[lp]=c%10;
            c/=10;
            lp++;
        }
        l=lp;
    }
    int sum=0;
    for(int i=0;i<1000;i++)
    sum+=arr[i];
    cout<<sum;
	return 0;
}

