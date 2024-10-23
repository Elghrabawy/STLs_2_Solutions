#include <bits/stdc++.h>
using namespace std;

#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

typedef pair<int, int> pii;

typedef pair<ll, ll> pll;

typedef vector<int> vi;
typedef vector<pii> v2i;

typedef map<int, int> mii;
typedef map<ll, ll> mll;

typedef vector<ll> vll;
typedef vector<pll> v2ll;

typedef vector<vi> vvi;
typedef vector<vll> vvl;

#define all(a)   a.begin(),a.end()
#define sz(a) (int)(a.size())
#define lg2(i) (ll)(i ? __builtin_clzll(1) - __builtin_clzll(i) : 0)

#define tests ll t; cin >> t; ll i_t = 0; while(i_t++ < t)
#define SetPre(n)  cout << fixed << setprecision(n)

#define endl '\n'

const ld pi = 3.14159265359;
const ld EPS = 1e-7;
const ll INF = 0x3f3f3f3f3f3f3f; // 1e16
const ll MAX = 1e9 + 7;

v2i dir = {{-1, 0}, {0, 1}, {1, 0}, {0, -1}}; // URDL

#define ini(a, n) memset(a, n, sizeof(a));

#define gmax(table, a) table = max(table, a)
#define gmin(mn, a) mn = min(mn, a)

#define fs first
#define sc second

template<class T> ostream &operator<<(ostream &out, vector<T> A) { for (auto x : A) out << x << ' '; return out; }
template<class T> ostream &operator<<(ostream &out, deque<T> A) { for (auto x : A) out << x; return out; }
template<class T> ostream &operator<<(ostream &out, set<T> A) { for (auto x : A) out << x << ' '; return out; }
template<class T> istream &operator>>(istream &in, vector<T> &A) { for (auto &x : A) in >> x; return in; }

void Borhom(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin), freopen("../output.txt", "w", stdout);
    #endif
}

void solve();

int main() {
    Borhom();
    
    // tests
    solve();
}

/* --------------------------------- Solve --------------------------------- */

#define int long long

void solve(){
    int k; cin >> k;
    
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(1);

    set<int> ans;
    while(sz(ans) < k){
        if(!ans.count(pq.top())){
            ans.insert(pq.top());

            pq.push(pq.top() * 2);
            pq.push(pq.top() * 3);
            pq.push(pq.top() * 5);
        }
        pq.pop();
    }

    cout << *ans.rbegin() << endl;
}
/* ------------------------------------------------------------------------- */