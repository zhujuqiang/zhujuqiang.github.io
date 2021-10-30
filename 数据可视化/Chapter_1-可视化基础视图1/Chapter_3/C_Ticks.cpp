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


#ifdef FREAD_OPTION
	#define MAXBUFFERSIZE 1000000
	inline char fgetc(){
	    static char buf[MAXBUFFERSIZE+5],*p1=buf,*p2=buf;
	    return p1==p2&&(p2=(p1=buf)+fread(buf,1,MAXBUFFERSIZE,stdin),p1==p2)?EOF:*p1++;
	}
	#undef MAXBUFFERSIZE
	#define gc fgetc
#else
	#define gc getchar
#endif 
struct IOReader{
	template<typename T>
	inline IOReader& operator >> (T& a){
		 a=0;bool flg=false;
		char ch=gc();
		while(ch<'0' || ch>'9'){if(ch=='-')	flg^=1;ch=gc();}
		while(ch>='0' && ch<='9'){a=(a<<3)+(a<<1)+(ch^'0');ch=gc();}
		if(flg)	a=-a;
		return *this;
	}
	inline IOReader& operator >> (string& a){
		a.clear();char ch=gc();
		while(isspace(ch) && ch!=EOF)	ch=gc();
		while(!isspace(ch) && ch!=EOF)	a+=ch,ch=gc();
		return *this;
	}
	inline IOReader& operator >> (char* a){
		#ifdef FREAD_OPTION
			char ch=gc();
			while(isspace(ch) && ch!=EOF)	ch=gc();
			while(!isspace(ch) && ch!=EOF)	*(a++)=ch,ch=gc();
			*a='\0';
		#else
			scanf(" %s",a);
		#endif
		return *this;
	}
	inline IOReader& operator >> (char &a){
		a=gc();
		while(isspace(a))	a=gc();
		return *this;
	}
	#define importRealReader(type) inline IOReader& operator >> (type& a){\
		a=0;bool flg=false;char ch=gc();\
		while((ch<'0' || ch>'9') && ch!='.'){if(ch=='-')flg^=1;ch=gc();}\
		while(ch>='0' && ch<='9'){a=a*10+(ch^'0');ch=gc();}\
		if(ch=='.'){\
			ch=gc();type p=0.1;\
			while(ch>='0' && ch<='9'){a+=p*(ch^'0');ch=gc();p*=0.1;}\
		}\
		if(flg)	a=-a;return *this;\
	}
	importRealReader(float)
	importRealReader(double)
	importRealReader(long double)
	#undef importRealReader
}iocin;
#define importReadInteger(type, name) type name(){type a=0;bool flg=false;char ch=gc();while(ch<'0' || ch>'9'){if(ch=='-')	flg^=1;ch=gc();}while(ch>='0' && ch<='9'){a=(a<<3)+(a<<1)+(ch^'0');ch=gc();}if(flg)	a=-a;return a;}
importReadInteger(int, readInt)
importReadInteger(unsigned int, readUInt)
importReadInteger(long long, readLL)
importReadInteger(unsigned long long, readULL)
importReadInteger(short, readShort)
importReadInteger(unsigned short, readUShort)
#undef importReadInteger
#define importReadDecimal(type, name) type name(){type a=0;bool flg=false;char ch=gc();while((ch<'0' || ch>'9') && ch!='.'){if(ch=='-')flg^=1;ch=gc();}while(ch>='0' && ch<='9'){a=a*10+(ch^'0');ch=gc();}if(ch=='.'){ch=gc();type p=0.1;while(ch>='0' && ch<='9'){a+=p*(ch^'0');ch=gc();p*=0.1;}}if(flg) a=-a;return a;}
importReadDecimal(float, readFL)
importReadDecimal(double, readDB)
importReadDecimal(long double, readLDB)
#undef importReadDecimal
 

#define mem(a,b) memset(a,b,sizeof a)
#define PII pair<int,int>
#define ll long long
#define ull unsigned long long
#define x first
#define y second
#define endl '\n'
#define PI acos(-1.0)
#define lcm(a,b) a/gcd(a,b)*b
#define INF 0x3f3f3f3f
#define INF_L 0x3f3f3f3f3f3f3f3f
#define debug(a) cout<<#a<<"="<<a<<endl;
#define Adebug(a,i) cout<<#a<<"["<<i<<"]="<<a[i]<<endl;
#define int long long
#define readI(l,r,A) for(int pig=l;pig<=r;pig++)	iocin >> A[pig]
#define _for(i,a,b) for( int i=(a); i<(b); ++i)
#define _rep(i,a,b) for( int i=(a); i<=(b); ++i)
#define vi vector<int>
#define vpii vector<PII>
#define mpii map<int,int>
#define mpci map<char,int>
#define pb push_back
#define rvs(s) reverse(s.begin(),s.end())
#define CY puts("YES")
#define CN puts("NO")


inline void wt(ll x){printf("%lld",x);}
inline void wtl(ll x){printf("%lld\n",x);}
inline void wtb(ll x){printf("%lld ",x);}
int qmi(int a, int k, int p){int res = 1;while (k){if (k & 1) res = (ll)res * a % p;a = (ll)a * a % p;k >>= 1;}return res;}
int qpow(int a,int b){int res = 1;while(b){if(b&1) res *= a;b>>=1;a*=a;}return res;}
int mo(int x,int p){return ((x%p)+p)%p;}
const int N = 2e5+7;

int dx[] = {0,0,1,-1}, dy[] = {1,-1,0,0};

signed main()
{
	
    return 0;
} 