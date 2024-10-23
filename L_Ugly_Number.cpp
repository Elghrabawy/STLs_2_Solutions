#include <bits/stdc++.h>
using namespace std;

 
void IO(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin) , freopen("../output.txt", "w", stdout);
    #endif
}

#define all(x) x.begin(), x.end()
#define ll long long
#define ull unsigned long long
#define lg2(i) (ll)(i ? __builtin_clzll(1) - __builtin_clzll(i) : 0)

ull power(ull a, ull b){
    if(b == 0) return 1;
    ull res = power(a * a, b / 2);
    if(b % 2) res *= a;
    return res;
}

int main() {
    IO();
    
    vector<ll> magic;

    for(int i = 0; i < 61; i++){
        for(int j = 0; j < 37; j++){
            for(int k = 0; k < 25; k++){
                ll a = power(2, i);
                ll b = power(3, j);
                ll c = power(5, k);    

                if(lg2(a) + lg2(b) + lg2(c) >= 63) break;
                if(a * b * c > 1e18) break;

                magic.push_back(a * b * c);
            }
        }
    }

    sort(all(magic));

    int k; cin >> k;
    cout << magic[k - 1] << endl;
}