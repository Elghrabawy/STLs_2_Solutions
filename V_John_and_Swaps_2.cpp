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
        
        map<int, int> freq;
        for(auto el : a) freq[el]++;

        int ans = 0;
        bool flag = false;

        for(int i = 0; i < n; i++){
            if(freq[a[i]] > 1) flag = true;

            ans += ((n - i) - freq[a[i]]);
            freq[a[i]]--;
        }

        cout << ans + flag << endl;
    }
}