#include <bits/stdc++.h>
using namespace std;

 
void IO(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("../input.txt", "r", stdin) , freopen("../output.txt", "w", stdout);
    #endif
}

#define all(x) x.begin(), x.end()

int main() {
    IO();

    int n, q; cin >> n >> q; // q : 20
    vector<string> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];

    while(q--){
        int t; cin >> t;
        if(t == 1){
            string x; cin >> x;
            auto it = find(all(v), x);
            if(it != v.end()) v.erase(it);
            else cout << "Not found" << endl;
        }
        if(t == 2){
            if(v.empty()) cout << 0 << endl;
            else{
                for(auto it = v.begin(); it != v.end(); it++) cout << *it << ' ';
                cout << endl;
            }
        }
        if(t == 3){
            if(v.empty()) cout << 0 << endl;
            else{
                for(auto it = v.rbegin(); it != v.rend(); it++) cout << *it << ' ';
                cout << endl;
            }
        }
    }
}