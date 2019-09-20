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
    int arr[100];
    for(int i=0;i<100;i++)
        arr[i]=0;
    for(int i=0;i<100;i++)
    {
        string s;
        cin>>s;
        int carry=0;
        for(int j=0;j<50;j++)
        {
            arr[j]+=((s[49-j]-'0')+carry);
            carry=arr[j]/10;
            arr[j]%=10;
        }
        int c2=0;
        int k=50;
        while(carry!=0)
        {
            arr[k]+=carry;
            carry=arr[k]/10;
            arr[k]%=10;
            k++;
        }
    }
    int fg=0;
    for(int i=99;i>=0;i--)
    {
        if(fg)
        cout<<arr[i];
        else
        {
            if(arr[i]!=0)
            {
                fg=1;
                cout<<arr[i];
                
            }
        }
    }
    return 0;
}
