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
bool isPrime[maxn];

void sangE(){
	FOR1(i,2,n){
		isPrime[i]=true;
	}
	FOR1(i,2,n/i){
		if(isPrime[i]){
			for(int j=i*i;j<=n;j+=i){
				isPrime[j]=false;
			}
		}
	}
}
int main()
{
 	fast();
	cin>>n;
	sangE();
	FOR1(i,2,n) {
		if(isPrime[i]){
			cout<<i<<" ";
		}
	}
}
