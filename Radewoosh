//~ while (clock()<=69*CLOCKS_PER_SEC)
//~ #pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("O3")
//~ #pragma GCC optimize("Ofast")
//~ #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
//~ #pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;
using namespace std;

template <typename T>
using ordered_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
  enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i)); }
sim, class b dor(pair < b, c > d) {
  ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
  *this << "[";
  for (auto it = d.b; it != d.e; ++it)
    *this << ", " + 2 * (it == d.b) << *it;
  ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

#define shandom_ruffle random_shuffle

using ll=long long;
using pii=pair<int,int>;
using pll=pair<ll,ll>;
using vi=vector<int>;
using vll=vector<ll>;
const int nax=1007;
const ll inf=1e18;

int n, k;
int tab[nax];

ll dp[nax][nax];

ll ko[nax][nax];

map <int,int> mapa;

void mini(ll &a, ll b)
{
	a=min(a, b);
}

void test()
{
	scanf("%d%d", &n, &k);
	for (int i=1; i<=n; i++)
		scanf("%d", &tab[i]);
	for (int i=1; i<=n; i++)
	{
		mapa.clear();
		int naj=0;
		for (int j=i; j<=n; j++)
		{
			mapa[tab[j]]++;
			naj=max(naj, mapa[tab[j]]);
			ko[i][j]=j-i+1-naj;
		}
	}
	for (int i=0; i<=n; i++)
		for (int j=0; j<=n; j++)
			dp[i][j]=inf;
	for (int i=0; i<=n; i++)
		dp[0][i]=0;
	for (int i=1; i<=n; i++)
		for (int j=i; j<=n; j++)
			for (int l=0; l<=n; l++)
				mini(dp[j][l+1], dp[i-1][l]+ko[i][j]);
	printf("%lld\n", dp[n][min(k+1, n)]);
}

int main()
{
	int t;
	scanf("%d", &t);
	for (int i=1; i<=t; i++)
	{
		printf("Case #%d: ", i);
		test();
	}
	return 0;
}
