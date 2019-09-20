#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define ld long double
#define mod 998244353
int arr[1000][1000];
int func(int x,int y)
{
    if(y>x || x>=15)
    return 0;
    return arr[x][y]+max(func(x+1,y),func(x+1,y+1));
}
int32_t main()
{
    for(int i=0;i<15;i++)
    for(int j=0;j<=i;j++)
    cin>>arr[i][j];
    cout<<func(0,0);
   	return 0;
}

