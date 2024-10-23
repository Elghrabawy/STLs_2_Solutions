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
        vector<int> a(n); for(auto &el : a) cin >> el;
        
        set<vector<int>> st;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                swap(a[i], a[j]);
                st.insert(a);
                swap(a[i], a[j]);
            }
        }

        cout << st.size() << endl;
    }
}