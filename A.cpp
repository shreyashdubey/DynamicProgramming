#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(0)
#define deb(x) cout << #x << "=" << x << endl;
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl;
#define mod 998244353
#define mod1 mod
#define mod2 1000000007
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define eb emplace_back
#define mkp make_pair
#define F first
#define S second
#define sz(x) (int)(x.size())
#define vi vector<int>
#define vl vector<ll>
ll toint(const string &s) {stringstream ss; ss << s; ll x; ss >> x; return x;}
string tostring ( ll number ){stringstream ss; ss<< number; return ss.str();}
bool sortbysec(const pair<int, int> &a,
	const pair<int, int> &b)
{
	return (a.second > b.second);
}
void solve(){
	int n; cin>>n; vector<ll>v(n+1),p(n+1,0); 
	map<ll,ll>mp;
	mp[0] = 1;
	ll ans = 0;
	for(int i = 1; i <=n; i++){
		cin>>v[i];
		p[i] = v[i]+p[i-1];
		int x = p[i] % n;
		if(x<0) x+=n;
		if(mp.find(x) != mp.end()){
			ans += mp[x];
		}
		mp[x]++;
	}
	cout<<ans;
}
int main() {
	fio;
	  #ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin); 
	freopen("output.txt","w",stdout);
	#endif
	int t = 1;
	// cin>>t;
	while(t--){
		solve();
		cout<<"\n";
	} 
}