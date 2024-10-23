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
    int n; cin >> n;
    vector<int> a(n); for(auto &x : a) cin >> x;
    multiset<int> st(all(a));

    int ans = 0;
    for(int i = 0; i < n; i++){
        st.erase(st.find(a[i]));

        bool flag = false;
        for(int j = 0; j < 31; j++)
            flag |= (st.find((1 << j) - a[i]) != st.end());
        
        ans += !flag;
        st.insert(a[i]);
    }
    cout << ans << endl;
}