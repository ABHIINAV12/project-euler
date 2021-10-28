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

vi vec_split(string s){
    vi id; f(i,0,sz(s)) if(s[i]==',') id.pb(i);
    vector<int> vt; int pre = 0;
    for(auto it : id) {
        string now = s.substr(pre,it-pre);
        vt.pb(stoi(now));
        pre = it+1;
    }
    return vt;
}

void solve(){
    int n; cin>>n;
    int sum = 0;
    f(i,0,n){
        string s; cin>>s; s+=',';
        vi h = vec_split(s);
        if(ok(h)) {
            int j=0;
            for(auto it : h) j+=it;
            sum += j;
        }
        for(auto it : h) cout<<it<<" "; cout<<"\n";
    }
    cout<<sum<<"\n";
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
