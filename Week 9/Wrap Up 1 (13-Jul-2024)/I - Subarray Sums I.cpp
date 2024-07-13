// Author: Muhtasim Hossain Musanna (Musanna47 / mhmusanna)

#include <bits/stdc++.h>

using namespace std;


#define fastio ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr)
#define nl '\n'
#define ll long long
#define ld long double
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
#define Dpos(n) fixed << setprecision(n)
#define sza(x) ((int)x.size())
#define all(x) x.begin(), x.end()
#define sort_des(x) sort(all(x), greater())
#define print(x) cout << x
#define println(x) cout << x << nl
#define print_all(x) for(auto& ele : x) cout << ele << " "; cout << nl
#define println_all(x) for(auto& ele : x) cout << ele << nl
#define print_pairs(x) for(auto& [f, s] : x) cout << f << " " << s << nl
#define min_heap(T, pq, cmp) auto cmp = greater(); priority_queue<T, vector<T>, decltype(cmp)> pq(cmp)
#define REPF(i, a, b) for(int i = a; i <= b; i++)
#define REPB(i, a, b) for(int i = a; i >= b; i--)


void OJ() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}


const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LL_INF = 1e18;
const double PI = 3.141592653589793;
const double EPS = 1e-7;


/*
    Ordered Set (PBDS)
*/

// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>

// using namespace __gnu_pbds;
// template<typename T>
// using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// ordered_set<int> oset;
// cout<<oset.order_of_key(-5)<<endl;
// cout<<*oset.find_by_order(1)<<endl;

/*
    Permutation
*/
// string S = "aaaa";
// do {
//     cout << S << nl;
// } while(next_permutation(all(S)));

/*
    Miscellanious
*/
//template<typename T1, typename T2, typename T3>
//struct info
//{
//    T1 x; T2 y; T3 z;
//};
//info<int,string,double> data{1,"one",1.1};
//auto [a,b,c] = data;
//auto &[a,b,c] = data;

/*
    String
*/
// string - find, substr(start, length), string::npos
// stoi, stol, stoll, stod, to_string

/*
    Math
*/
// gcd(x,y), lcm(x,y), __gcd(x,y); [C++14]
// ceil, floor, round, abs, toupper, tolower, pow, sqrt

/*
    Sieve of Eratosthenes
*/

// const int PRIME_LEN = 1e6 + 1;
// bool isPrime[PRIME_LEN];
// vi primeNums;

// void sieve() {
//     memset(isPrime, true, sizeof(isPrime));
//     isPrime[0] = isPrime[1] = false;
//     // Part 1
//     for (int i = 2; i * i <= PRIME_LEN; i++) {
//         if (isPrime[i]) {
//             for (int j = i * i; j < PRIME_LEN; j += i) {
//                 isPrime[j] = false;
//             }
//         }
//     }
//     // Part 2
//     for (int i = 2; i < PRIME_LEN; i++) {
//         if (isPrime[i])
//             primeNums.pb(i);
//     }
// }

/*
    Binary Exponentiation
*/

//ll expo(ll base, ll pow) {
//    ll ans = 1;
//    while (pow) {
//        if (pow & 1) ans = ans * base % MOD;
//        base = base * base % MOD;
//        pow >>= 1;
//    }
//    return ans;
//}

/*
    Custom Compare Functions
*/

// bool comp(int a, int b) {
//     return a < b;
// Use with set, map, etc.
// set<int, decltype(&comp)> s(&comp);
// }

// bool pqComp(int a, int b) {
//     return !comp(a, b);
// Use with pQueue
// pQueue<int, vector<int>, decltype(&pqComp)> pq(&pqComp);
// }

/*
    Bitset & Bit Manipulation Tricks
*/
// const int LEN = 32;
// bitset<LEN> bs;
// bs - count, size, all, any, none, set, reset, flip, to_string, to_ulong, to_ullong

// __builtin_popcount(num); __builtin_popcountll(num);
// __builtin_ctz(num); __builtin_ctzll(num);
// __builtin_clz(num); __builtin_clzll(num);

//Set Bit: n | (1 << x)
//Flip Bit: n ^ (1 << x)
//Clear Bit: n & ~(1 << x)
//Bit is set?: (n >> x) & 1
//Num is a power of 2: n && !(n & (n - 1))
//Num is divisible by power of 2: (n & ((1 << k) - 1)) == 0
//Clear all trailing ones: n & (n + 1)
//Set last cleared bit n | (n + 1)
//Extract last set bit: n & -n
//__bit_width(), __bit_floor(), __bit_ceil(), __builtin_parity, __builtin_ffs()

//All possible combinations
//for (int i = 0; i < (1 << n); i++) {
//    int idx = 0;
//    for (int j = i; j > 0; j >>= 1, idx++) {
//        if (j & 1) {
//            cout << a[idx] << ' ';
//        }
//    }
//    cout << nl;
//}

int log2_ceil(int val) {
    if (val == 0) return 0;
    return 32 - __builtin_clz(val) - (__builtin_popcount(val) == 1);
}

int log2_ceil_ll(ll val) {
    if (val == 0) return 0;
    return 64 - __builtin_clzll(val) - (__builtin_popcountll(val) == 1);
}

int log2_floor(int val) {
    return 32 - __builtin_clz(val) - 1;
}

int log2_floor_ll(ll val) {
    return 64 - __builtin_clzll(val) - 1;
}

template<typename T>
T input() {
    T x;
    cin >> x;
    return x;
}

template<typename T>
vector<T> cinv(int n) {
    vector<T> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    return v;
}


void solve() {
    auto n = input<int>();
    auto k = input<int>();
    auto a = cinv<int>(n);

    ll ans = 0, pref = 0;
    map<ll, int> cnt;
    cnt[0]++;

    REPF(i, 0, n - 1) {
        pref += a[i];
        ll need = pref - k;
        ans += cnt[need];
        cnt[pref]++;
    }

    println(ans);
}


int main() {
    fastio;

    OJ();

    // cout << Dpos(9);

    // sieve();

    int t = 1;
    // cin >> t;
    REPF(i, 1, t) {
        // cout << "Case " << i << ": ";
        solve();
        // cout << nl;
    }

    return 0;
}
