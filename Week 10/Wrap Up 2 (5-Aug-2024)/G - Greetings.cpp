#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;


#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define nl '\n'
#define ll long long
#define ld long double
#define ull unsigned ll
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define vi vector<int>
#define vll vector<ll>
#define vb vector<bool>
#define vc vector<char>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vvi vector<vi>
#define vvll vector<vll>
#define vvb vector<vb>
#define vvc vector<vc>
#define vpii vector<pii>
#define vpll vector<pll>
#define unset unordered_set
#define unmap unordered_map
#define mset multiset
#define mmap multimap
#define unmset unordered_multiset
#define unmmap unordered_multimap
#define pQueue priority_queue
#define sza(x) ((int)x.size())
#define all(x) x.begin(), x.end()
#define sort_des(x) sort(all(x), greater())
#define print_all(x) for(auto& ele : x) cout << ele << " "; cout << nl
#define println_all(x) for(auto& ele : x) cout << ele << nl
#define print_pairs(x) for(auto& [f, s] : x) cout << f << " " << s << nl
#define min_heap(T, pq) auto cmp = greater(); pQueue<T, vector<T>, decltype(cmp)> pq(cmp)
#define REP(i,a,b) for(int i = a; i <= b; i++)
#define FEL(i,x) for(auto& i : x)
#define FEC(i,x) for(auto i : x)
#define SQ(a) (a)*(a)

 
void OJ() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif // ONLINE_JUDGE
}
 
 
const int MOD = 1e9 + 7;
const int INF = 1e9;
 
int modNum(ll num) {
    return ((num < MOD) ? num : num - MOD);
}

bool comp(int a, int b) {
    return a < b; 
    // Use with set, map, etc.
    // set<int, decltype(&comp)> s(&comp);
}

bool pqComp(int a, int b) {
    return !comp(a, b); 
    // Use with pQueue
    // pQueue<int, vector<int>, decltype(&pqComp)> pq(&pqComp);
}


void solve() {
    int n;
    cin >> n;
    vpii arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i].second >> arr[i].first;
    sort(all(arr));
    ordered_set oset;
    ll result = 0;
    for (int i = 0; i < n; i++) {
        result += sza(oset) - oset.order_of_key(arr[i].second);
        oset.insert(arr[i].second);
    }
    cout << result << nl;
}


int main() {
    fastio;
    // OJ();

    int t = 1;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        // cout << "Case #" << i << ": ";
        solve();
    }

    return 0;
}