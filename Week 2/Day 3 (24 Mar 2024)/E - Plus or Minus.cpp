// Problem Name - Source
// Date: -/-/2024
// Author: Musanna47 (mhmusanna)


#include <bits/stdc++.h>

using namespace std;


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
#define print(x) cout << x
#define println(x) cout << x << nl
#define print_all(x) for(auto& ele : x) cout << ele << " "; cout << nl
#define println_all(x) for(auto& ele : x) cout << ele << nl
#define print_pairs(x) for(auto& [f, s] : x) cout << f << " " << s << nl
#define min_heap(T, pq, cmp) auto cmp = greater(); pQueue<T, vector<T>, decltype(cmp)> pq(cmp)
#define REPF(i, a, b) for(int i = a; i <= b; i++)
#define REPB(i, a, b) for(int i = a; i >= b; i--)
#define FEL(i, x) for(auto& i : x)
#define FEC(i, x) for(auto i : x)
#define SQ(a) (a)*(a)


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

//#include <ext/pb_ds/assoc_container.hpp>
//#include <ext/pb_ds/tree_policy.hpp>

//using namespace __gnu_pbds;
//template<typename T>
//using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// ordered_set<int> oset;
// cout<<oset.order_of_key(-5)<<endl;
// cout<<*oset.find_by_order(1)<<endl;

/*
    Bitset & Bit Manipulation Tricks
*/

/*
    Trie
*/

/*
    Hashing
*/

/*
    Fenwick Tree (BIT)
*/

//struct BIT {
//    int n;
//    vll tree;
//
//    BIT(int _n) : n(_n) { tree.assign(n + 5, 0); }
//
//    void init(int _n) {
//        n = _n;
//        fill(tree.begin(), tree.begin() + n + 5, 0);
//    }
//
//    void pointAdd(int i, int x) {
//        for (; i <= n; tree[i] += x, i += (i & -i));
//    }
//
//    void rangeAdd(int l, int r, int x) {
//        pointAdd(l, x);
//        pointAdd(r + 1, -x);
//    }
//
//    ll pointQuery(int i) {
//        ll sum = 0;
//        for (; i > 0; sum += tree[i], i -= (i & -i));
//        return sum;
//    }
//
//    ll rangeQuery(int l, int r) {
//        return pointQuery(r) - pointQuery(l - 1);
//    }
//};

/*
    Segment Tree
*/

/*
    Binary Search, Upper Bound, Lower Bound
*/

/*
    Prefix Sum & Difference Array
*/

/*
    Combinatorics
*/

/*
    Number Theory
*/

/*
    Geometry
*/

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

// gcd(x,y), lcm(x,y), __gcd(x,y); [C++14]
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


/*
    Matrix Operations
*/

// void transposeMatrix(vvi& mat) {
//     REPF(i,0,sza(mat)-1) {
//         REPF(j,0,sza(mat[0])-1) {
//             swap(mat[i][j], mat[j][i]);
//         }
//     }
// }
// void rotateClock(vvi& mat) {
//     transposeMatrix(mat);
//     for (auto& row : mat) {
//         reverse(all(row));
//     }
// }
// void rotateAnti(vvi& mat) {
//     transposeMatrix(mat);
//     for (int i = 0; i < sza(mat[0]); i++) {
//         for (int j = 0; j < sza(mat) / 2; j++) {
//             swap(mat[j][i], mat[sza(mat[0]) - 1 - j][i]);
//         }
//     }
// }

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
    Divisor Count
*/

// ll numOfDivisors(ll n) {
//     ll result = 1;
//     for (int i = 0; n > 1 && i < sza(primeNums) && primeNums[i] <= n; i++) {
//         if (n % primeNums[i] == 0) {
//             ll cnt = 1;
//             while (n % primeNums[i] == 0) {
//                 cnt++;
//                 n /= primeNums[i];
//             }
//             result *= cnt;
//         }
//     }
//     if (n > 1)
//         result *= 2;
//     return result;
// }

/*
    Divisor Sum
*/

// ll sumOfDivisors(ll n) {
//     ll result = 1;
//     for (int i = 0; n > 1 && i < sza(primeNums) && primeNums[i] <= n; i++) {
//         if (n % primeNums[i] == 0) {
//             int cnt = 1;
//             while (n % primeNums[i] == 0) {
//                 cnt++;
//                 n /= primeNums[i];
//             }
//             result *= (pow(primeNums[i], cnt) - 1) / (primeNums[i] - 1);
//         }
//     }
//     if (n > 1) {
//         result *= (n * n - 1) / (n - 1);
//     }
//     return result;
// }


// int modNum(ll num) {
//     return ((num < MOD) ? num : num - MOD);
// }

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
    auto a = input<int>();
    auto b = input<int>();
    auto c = input<int>();
    if (a + b == c) {
        println("+");
    } else {
        println("-");
    }
}


int main() {
    fastio;

    OJ();

//    cout << Dpos(9);

//    sieve();

    int t = 1;
    cin >> t;
    REPF(i, 1, t) {
//        cout << "Case " << i << ": ";
        solve();
//        cout << nl;
    }

    return 0;
}
