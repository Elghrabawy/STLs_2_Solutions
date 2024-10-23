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

bool cmp(string s1, string s2){
    return s1.size() < s2.size();
}

int main() {
    IO();
    
    int n; cin >> n;
    vector<string> s(n);
    for(auto &el : s) cin >> el;

    sort(all(s), cmp);

    string last = s[0];
    for(int i = 0; i < n; i++){
        if(s[i].find(last) == string::npos){
            cout << "NO" << endl;
            return 0;
        }
        last = s[i];
    }

    cout << "YES" << endl;
    for(auto &el : s) cout << el << endl;
}