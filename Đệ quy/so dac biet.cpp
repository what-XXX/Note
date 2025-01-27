#include<bits/stdc++.h>
typedef long long ll;
#define FOR1(i,a,b) for(int i=a; i<=b;i++)
#define FOR2(i,b,a) for(int i=b;i>=a;i--)
#define reset(a,x) memset(a,x,sizeof(a))
#define sz(a) sizeof a
#define mii map<int,int>
#define pb push_back
#define ii pair<int,int>
#define fi first
#define se second
#define el cout<<'\n'
using namespace std;

const int maxn=1e5+1;
const long long Mod=1e9+7;
const long double pi= 3.14159265359;
const long double e = 2.718281828459;
const ll INF = 1e18;

int n,k,pre[maxn];
vector<bool> check;

void fast()
{
 	//freopen(" .INP","r",stdin);
	//freopen(" .OUT","w",stdout);
 	ios_base::sync_with_stdio(false);
 	cin.tie(0); cout.tie(0);
}
// z: tong tch luy tu cac lan goi ham de quy truoc do
// i: he so nhan cho tung lan goi de quy
ll key(ll n,ll k,ll z, ll i)
{   
  	if(n==0) return z;// dieu kien dung
	if(n%k<=1)
{
    return key((n-n%k)/k,k,z,i*k);// n duoc chia cho k sau khi da tru phan du
    // i*k de cap nhat he so nha  cho vong de quy tiep theo
}
	else 
	{
    	return key((n+k-n%k)/k,k,z+(k-n%k)*i,i*k);// n tang them (k-n%k) de phan du = 0 truoc khi chia cho k
   	 	//z duoc them de tich luy ket qua
	}
}
 void solve()
{
 	ll n,k;cin>>n>>k;
	cout<<(n+key(n,k,0,1))%Mod;
}
int main()
{
 	fast();
	solve();
}
