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

    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s, t; cin >> s >> t;
        vector<int> id(n); for(auto &x : id) cin >> x;


        map<int, multiset<char>> mp1, mp2;
        for(int i = 0; i < n; i++){
            mp1[id[i]].insert(s[i]);
            mp2[id[i]].insert(t[i]);    
        }


        bool ans = true;
        for(auto &[id, s] : mp1){
            if(mp1[id] == mp2[id]) continue;
            else ans = false;
        }

        cout << (ans ? "YES" : "NO") << endl;
    }
}