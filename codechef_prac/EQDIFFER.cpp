#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#define fast cin.tie(0); cin.sync_with_stdio(0);
#define ll long long
#define ull unsigned long long
#define ld long double
#define oo (ll)1e9
#define OO (ll)1e18
#define PI acos(-1)
using namespace std;
using namespace __gnu_pbds;
template<class T> using ordered_set = tree<T, null_type , less<T> , rb_tree_tag , tree_order_statistics_node_update> ;
const ll mod = 1e9 + 7;
const int MOD = 998244353;
int tt = 1;
int test;
void solve()
{
	int n;
	int mx = 0;
	cin >> n;
	map<int,int>mp;
	for(int i = 0 ; i < n ; i++){
	    int x;
	    cin >> x;
	    mp[x]++;
	    mx = max(mx , mp[x]);
	}
	if(n <= 2) cout << 0 << '\n';
	else if(mx == 1) cout << n - 2 << '\n';
	else cout << n - mx << '\n';
}
int main()
{

    fast
    cin >> tt;
    while(tt--)
        solve();
    return 0;
}
