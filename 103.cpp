// Just coded it, got the idea from constraints.

// focus this moment !!
// Author : Abhinav 
 
#include<bits/stdc++.h> 
#include <iostream> 
#include <vector> 
#include <iterator>
using namespace std;
#define int long long
#define ld long double
#define pb push_back
#define ff first
#define ss second
#define f(i,x,n) for(int i=x;i<(int)n;++i)
#define vi vector<int>
#define vvi vector<vector<int>>
#define vvvi vector<vector<vector<int>>>
#define pq priority_queue<int>
#define pqs priority_queue<int,vi,greater<int>>	
#define vpii vector<pair<int,int>>
#define pii pair<int,int>
#define all(x) x.begin(),x.end()
#define sz(x) (int)x.size()
#define mpi map<int,int>
#define lb lower_bound 
#define ub upper_bound 

int mod=1e9+7;
const int mxn=101000;

bool ok(vi &a){
    int n = sz(a);
    int sub[1<<n]={0};
    int mn[n+1],mx[n+1]={0}; f(i,0,n+1) mn[i] = INT_MAX;
    unordered_set<int> st;
    f(i,0,1<<n){
        int now = 0,cnt=0;
        f(j,0,n) if((i>>j)&1) now+=a[j],++cnt;
        if(st.find(now)!=st.end()) return 0;
        st.insert(now);
        mn[cnt] = min(mn[cnt],now);
        mx[cnt] = max(mx[cnt],now);
        sub[i] = now;
    }
    sort(sub,sub+(1ll<<n));
    f(i,1,n+1) if(mn[i]<=mx[i-1]) return 0;
    f(i,1,1<<n) if(sub[i]==sub[i-1]) return 0;
    return 1;
}

void solve(){
    const int num = 47;
    int curr = INT_MAX;
    vi ans;
    f(i1,20,num)f(i2,i1+1,num)f(i3,i2+1,num)f(i4,i3+1,num)f(i5,i4+1,num)f(i6,i5+1,num)f(i7,i6+1,num){
        vector<int> tp = {i1,i2,i3,i4,i5,i6,i7};
        int here = i1 + i2 + i3 + i4 + i5 + i6 + i7;
        if(!ok(tp)) continue;
        if(here<curr){
            curr = here;
            ans = tp;
        }
    }
    for(auto it : ans) cout<<it;
}
 
int32_t main(){
 	ios_base::sync_with_stdio(false);cin.tie(NULL);	
	srand(time(0)); 	
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
    #endif
	int t=1; //cin>>t;
	while(t--) solve();
	return 0;
}
