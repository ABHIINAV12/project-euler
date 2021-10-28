// focus this moment !!
 
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
const int mxn=90;

int dis[mxn][mxn];

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
    int n = 80;
    vvi here;
    f(i,0,n){
        string s; cin>>s; s+=',';
        vi h = vec_split(s);
        here.pb(h);
    }
    priority_queue<array<int,3>> q;
    f(i,0,n) f(j,0,n) dis[i][j] = INT_MAX;
    int mn = INT_MAX;
    f(i,0,80) q.push({-here[i][0],i,0}), dis[i][0] = here[i][0];
    int dx[3] = {0,-1,1};
    int dy[3] = {1,0,0};
    while(!q.empty()){
        array<int,3> t = q.top(); q.pop();
        f(k,0,3){
            int nx = dx[k] + t[1];
            int ny = dy[k] + t[2];
            if(nx<0 || ny<0 || nx>=80 || ny>=80) continue;
            if(dis[nx][ny]>(dis[t[1]][t[2]]+here[nx][ny])){
                dis[nx][ny]=(dis[t[1]][t[2]]+here[nx][ny]);
                q.push({-dis[nx][ny],nx,ny});
            }
        }
    }
    int ans = INT_MAX;
    f(i,0,80) ans = min(ans,dis[i][79]);
    cout<<ans;
}
 
int32_t main(){
 	ios_base::sync_with_stdio(false);cin.tie(NULL);	
	srand(time(0)); 	
	/*#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif*/
	int t=1; //cin>>t;
	while(t--) solve();
	return 0;
}
