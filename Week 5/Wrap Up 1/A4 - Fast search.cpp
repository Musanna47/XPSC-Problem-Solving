// Problem Name - Source
// Date: -/-/2024

#include <bits/stdc++.h>
using namespace std;


// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
 
// typedef __gnu_pbds::tree<int, __gnu_pbds::null_type, less<int>, __gnu_pbds::rb_tree_tag, __gnu_pbds::tree_order_statistics_node_update> ordered_set;

// ordered_set oset;
// cout<<X.order_of_key(-5)<<endl;
// cout<<*X.find_by_order(1)<<endl;



// __builtin_popcount(num);
// __builtin_popcountll(num);
// __builtin_ctz(num);
// __builtin_ctzll(num);
// __builtin_clz(num);
// __builtin_clzll(num);

// iota(all(arr), num);
// string S = "aaaa";
// do {
//     cout << S << nl;
// } while(next_permutation(all(S)));
// __gcd(num1, num2); [C++14]
// ceil, floor, round, abs, toupper, tolower, pow, sqrt
/*

emplate<typename T1, typename T2, typename T3>  
struct info  
{ 
    T1 x; T2 y; T3 z; 
    // overload () to make tuple 
    auto operator()()  
    { 
        return make_tuple(x,y,z); 
    } 
}; 
 
info<int,string,double> data{1,"one",1.1}; 
 
int a; 
string b; 
double c; 
 
// do the structured bindings 
tie(a,b,c) = data(); 

template<typename T1, typename T2, typename T3>  
struct info  
{ 
    T1 x; T2 y; T3 z; 
}; 
 
info<int,string,double> data{1,"one",1.1}; 
// do the structured bindings 
auto [a,b,c] = data; 
auto &[a,b,c] = data; 
*/
// stoi, stol, stoll, stod
// string - find, substr(start, length), string::npos
// 


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
#define vd vector<double>
#define vld vector<ld>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define vvi vector<vi>
#define vvll vector<vll>
#define vvb vector<vb>
#define vvc vector<vc>
#define vvd vector<vd>
#define vvld vector<vld>
#define vpii vector<pii>
#define vpll vector<pll>
#define unset unordered_set
#define unmap unordered_map
#define mset multiset
#define mmap multimap
#define unmset unordered_multiset
#define unmmap unordered_multimap
#define pQueue priority_queue
#define Dpos(n) fixed << setprecision(n)
#define sza(x) ((int)x.size())
#define all(x) x.begin(), x.end()
#define sort_des(x) sort(all(x), greater())
#define print_all(x) for(auto& ele : x) cout << ele << " "; cout << nl
#define println_all(x) for(auto& ele : x) cout << ele << nl
#define print_pairs(x) for(auto& [f, s] : x) cout << f << " " << s << nl
#define min_heap(T, pq) auto cmp = greater(); pQueue<T, vector<T>, decltype(cmp)> pq(cmp)
#define repF(i,a,b) for(int i = a; i <= b; i++)
#define repB(i,a,b) for(int i = a; i >= b; i--)
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
const double PI = 3.141592653589793;
const double EPS = 1e-4;

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
    int n, q;
    cin >> n;
    vi arr(n);
    repF(i,0,n-1) cin >> arr[i];
    sort(all(arr));
    cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        int i = lower_bound(all(arr), l) - arr.begin();
        int j = upper_bound(all(arr), r) - arr.begin();
        cout << j - i << nl;
    }
}


int main() {
    fastio;
    // OJ();

    // cout << Dpos(9);

    int t = 1;
    // cin >> t;
    repF(i, 1, t) {
        // cout << "Case " << i << ": ";
        solve();
    }

    return 0;
}
