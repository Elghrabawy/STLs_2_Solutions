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

int main() {
    IO();
    
    int n; cin >> n;
    map<string, string> mp;

    for(int i = 0; i < n; i++){
        string a, b; cin >> a >> b;

        bool flag = false;
        for(auto &[_old, _new] : mp){
            if(_new == a) _new = b, flag = true;
        }
        if(!flag) mp[a] = b;
    }

    cout << mp.size() << endl;
    for(auto &[a, b] : mp) cout << a << " " << b << endl;
}
