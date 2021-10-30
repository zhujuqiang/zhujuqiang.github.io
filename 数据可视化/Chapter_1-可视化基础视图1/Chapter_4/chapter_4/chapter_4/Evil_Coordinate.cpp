/*******************************
| Author:  pigstar
| Problem: %$Problem$%
| Contest: %$Contest$%
| URL:     %$URL$%
| When:    %$Time$%
| 
| Memory:  %$MemoryL$% MB
| Time:    %$TimeL$% ms
*******************************/
#include<iostream>
#include<cstring>
#include<cmath>
#include<vector>
#include<map>
#include<set>
#include<queue>
#include<stack>
#include<deque>
#include<algorithm>

using namespace std;


#define mem(a,b) memset(a,b,sizeof a)
#define PII pair<int,int>
#define ll long long
#define ull unsigned long long
#define fi first
#define se second
#define endl '\n'
#define PI acos(-1.0)
#define lcm(a,b) a/gcd(a,b)*b
#define INF 0x3f3f3f3f
#define INF_L 0x3f3f3f3f3f3f3f3f
#define debug(a) cout<<#a<<"="<<a<<endl;
#define Adebug(a,i) cout<<#a<<"["<<i<<"]="<<a[i]<<endl;
#define int long long
#define readI(l,r,A) for(int pig=l;pig<=r;pig++)	iocin >> A[pig]
#define rep(i, a, b) for(int i = (a); i <= (b); i ++)
#define per(i, a, b) for(int i = (a); i >= (b); i --)
#define vi vector<int>
#define vpii vector<PII>
#define pb push_back
#define rvs(s) reverse(s.begin(),s.end())
#define all(s) s.begin(),s.end()
#define sz(s) (int)(s.size())
#define lb(s) ((s) & (-s))
#define mk(s, t) make_pair(s, t)


inline void wt(ll x){printf("%lld",x);}
inline void wtl(ll x){printf("%lld\n",x);}
inline void wtb(ll x){printf("%lld ",x);}
template <typename T> bool chkmx(T &x, T y){return x < y ? x = y, true : false;}
template <typename T> bool chkmn(T &x, T y){return x > y ? x = y, true : false;}
int qmi(int a, int k, int p){int res = 1;while (k){if (k & 1) res = (ll)res * a % p;a = (ll)a * a % p;k >>= 1;}return res;}
int qpow(int a,int b){int res = 1;while(b){if(b&1) res *= a;b>>=1;a*=a;}return res;}
int mo(int &x,int p){return x = ((x%p)+p)%p;}
int gcd(int a,int b){return b?gcd(b,a%b):a;
}
const int maxn = 1e6+7;
const int mod = 1e9+7;
int dx[] = {0,0,1,-1}, dy[] = {1,-1,0,0};

int T,N,M;
int A[maxn],B[maxn];
int st[maxn];
vi G[maxn];
signed main()
{

	cin >> T;
	while(T--){









	}
    return 0;
} 